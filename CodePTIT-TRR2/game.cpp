#include "raylib.h"
#include <bits/stdc++.h>
using namespace std;

// ===================== CONFIG =====================
const int SCREEN_W = 1100;
const int SCREEN_H = 700;

// Color Palette
const Color BG_DARK      = {10,  14,  30,  255};
const Color BG_PANEL     = {18,  24,  48,  255};
const Color ACCENT_BLUE  = {60,  140, 255, 255};
const Color ACCENT_CYAN  = {0,   210, 200, 255};
const Color ACCENT_GREEN = {50,  230, 120, 255};
const Color ACCENT_RED   = {255, 80,  80,  255};
const Color ACCENT_GOLD  = {255, 200, 60,  255};
const Color NODE_COLOR   = {40,  60,  120, 255};
const Color NODE_BORDER  = {80,  140, 255, 255};
const Color NODE_START   = {255, 180, 0,   255};
const Color EDGE_DEFAULT = {60,  80,  130, 255};
const Color EDGE_SEL     = {0,   210, 200, 255};
const Color EDGE_CORRECT = {50,  230, 120, 255};
const Color EDGE_WRONG   = {255, 80,  80,  255};
const Color TEXT_MAIN    = {220, 230, 255, 255};
const Color TEXT_DIM     = {100, 120, 170, 255};
const Color BTN_NORMAL   = {30,  50,  100, 255};
const Color BTN_HOVER    = {50,  90,  180, 255};
const Color BTN_PRESS    = {20,  30,  70,  255};

// ===================== STRUCTS =====================
struct Edge { int u, v; };

struct Graph {
    int n;
    vector<vector<int>> adj;
    vector<Edge> edges;
    Graph(int n) : n(n), adj(n) {}
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u, v});
    }
};

enum GameState { MENU, PLAYING, RESULT };

// ===================== DFS =====================
void dfsUtil(int u, vector<bool>& visited, vector<Edge>& tree, Graph& g) {
    visited[u] = true;
    for (int v : g.adj[u]) {
        if (!visited[v]) {
            tree.push_back({u, v});
            dfsUtil(v, visited, tree, g);
        }
    }
}
vector<Edge> dfsSpanningTree(Graph& g, int start) {
    vector<bool> visited(g.n, false);
    vector<Edge> tree;
    dfsUtil(start, visited, tree, g);
    return tree;
}

// ===================== BFS =====================
vector<Edge> BFS_Tree(Graph& g, int start) {
    vector<bool> vis(g.n, false);
    vector<Edge> tree;
    queue<int> q;
    q.push(start); vis[start] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : g.adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                tree.push_back({u, v});
                q.push(v);
            }
        }
    }
    return tree;
}

// ===================== HELPERS =====================
bool inTree(vector<Edge>& tree, int u, int v) {
    for (auto& e : tree)
        if ((e.u == u && e.v == v) || (e.u == v && e.v == u)) return true;
    return false;
}

Graph generateGraph(int level) {
    Graph g(7);
    vector<pair<int,int>> base = {{0,1},{0,2},{1,3},{1,4},{2,5},{2,6}};
    random_shuffle(base.begin(), base.end());
    for (auto& e : base) g.addEdge(e.first, e.second);
    vector<pair<int,int>> extra = {{3,4},{4,5},{5,6},{0,3},{1,6},{2,4}};
    random_shuffle(extra.begin(), extra.end());
    int extraEdges = 2 + level;
    for (int i = 0; i < extraEdges && i < (int)extra.size(); i++)
        g.addEdge(extra[i].first, extra[i].second);
    return g;
}

// ===================== BUTTON =====================
struct Button {
    Rectangle rect;
    const char* label;
    Color colNormal, colHover, colPress;

    bool Draw(bool enabled = true) {
        Vector2 mouse = GetMousePosition();
        bool hover = CheckCollisionPointRec(mouse, rect) && enabled;
        bool pressed = hover && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
        bool held    = hover && IsMouseButtonDown(MOUSE_LEFT_BUTTON);

        Color c = enabled ? (held ? colPress : (hover ? colHover : colNormal)) : (Color){25,30,55,255};
        float alpha = enabled ? 1.0f : 0.5f;

        // Shadow
        DrawRectangleRounded({rect.x+3, rect.y+4, rect.width, rect.height}, 0.3f, 8, {0,0,0,80});
        // Body
        DrawRectangleRounded(rect, 0.3f, 8, c);
        // Border glow
        Color border = hover ? ACCENT_CYAN : (Color){60,90,160,255};
        DrawRectangleRoundedLinesEx(rect, 0.3f, 8, 1.5f, border);
        // Label
        int fs = 17;
        int tw = MeasureText(label, fs);
        Color tc = enabled ? TEXT_MAIN : TEXT_DIM;
        DrawText(label, rect.x + (rect.width - tw)/2, rect.y + (rect.height - fs)/2, fs, tc);

        return pressed;
    }
};

// ===================== NODE POSITIONS =====================
// Layout: 7 nodes arranged nicely
Vector2 nodePos[7];
void initNodePos(int panelX, int panelY, int panelW, int panelH) {
    // Two-level tree layout
    float cx = panelX + panelW * 0.5f;
    float top = panelY + 80;
    float rowH = (panelH - 160) / 3.0f;

    // Row 0: node 0
    nodePos[0] = {cx, top};
    // Row 1: nodes 1, 2
    nodePos[1] = {cx - panelW*0.22f, top + rowH};
    nodePos[2] = {cx + panelW*0.22f, top + rowH};
    // Row 2: nodes 3,4,5,6
    float spacing = panelW * 0.15f;
    nodePos[3] = {cx - spacing*1.5f, top + rowH*2};
    nodePos[4] = {cx - spacing*0.5f, top + rowH*2};
    nodePos[5] = {cx + spacing*0.5f, top + rowH*2};
    nodePos[6] = {cx + spacing*1.5f, top + rowH*2};
}

// ===================== DRAW GRAPH =====================
void DrawArrow(Vector2 from, Vector2 to, Color c, float thick) {
    DrawLineEx(from, to, thick, c);
}

void drawGraphVisual(Graph& g, vector<bool>& sel, vector<Edge>* correct,
                     int startNode, bool showResult, int hovered) {
    int R = 24;
    // Edges
    for (int i = 0; i < (int)g.edges.size(); i++) {
        auto& e = g.edges[i];
        Vector2 from = nodePos[e.u];
        Vector2 to   = nodePos[e.v];

        Color ec;
        float thick;
        if (showResult) {
            bool should = inTree(*correct, e.u, e.v);
            if (should && sel[i])       { ec = EDGE_CORRECT; thick = 4; }
            else if (!should && sel[i]) { ec = EDGE_WRONG;   thick = 4; }
            else if (should && !sel[i]) { ec = ACCENT_GOLD;  thick = 3; }
            else                        { ec = EDGE_DEFAULT; thick = 1.5f; }
        } else {
            if (sel[i])          { ec = EDGE_SEL;     thick = 3.5f; }
            else if (hovered==i) { ec = ACCENT_GOLD;  thick = 2.5f; }
            else                 { ec = EDGE_DEFAULT; thick = 1.5f; }
        }

        // Glow for selected
        if (sel[i] && !showResult) {
            DrawLineEx(from, to, thick + 6, {(unsigned char)ec.r,(unsigned char)ec.g,(unsigned char)ec.b,40});
        }
        DrawLineEx(from, to, thick, ec);

        // Edge index label
        Vector2 mid = {(from.x+to.x)/2, (from.y+to.y)/2};
        char lbl[8];
        sprintf(lbl, "%d", i+1);
        int fs = 13;
        int tw = MeasureText(lbl, fs);
        DrawRectangle(mid.x - tw/2 - 3, mid.y - fs/2 - 2, tw+6, fs+4, BG_DARK);
        DrawText(lbl, mid.x - tw/2, mid.y - fs/2, fs, (sel[i] ? ACCENT_CYAN : TEXT_DIM));
    }

    // Nodes
    for (int i = 0; i < g.n; i++) {
        Vector2 p = nodePos[i];
        bool isStart = (i == startNode);

        // Glow
        Color glowC = isStart ? (Color){255,180,0,50} : (Color){60,140,255,30};
        DrawCircleV(p, R+8, glowC);

        // Body
        Color nc = isStart ? NODE_START : NODE_COLOR;
        DrawCircleV(p, R, nc);
        DrawCircleLines((int)p.x, (int)p.y, R, isStart ? ACCENT_GOLD : NODE_BORDER);

        // Label
        char lbl[4];
        sprintf(lbl, "%d", i);
        int fs = 18;
        int tw = MeasureText(lbl, fs);
        DrawText(lbl, p.x - tw/2, p.y - fs/2, fs, TEXT_MAIN);
    }
}

// ===================== MAIN GAME =====================
struct GameSession {
    Graph g;
    int startNode;
    vector<Edge> dfsTree, bfsTree;
    vector<Edge>* correct;
    string modeName;
    vector<bool> sel;
    int cnt, need;
    bool done;
    bool resultOk;
    string message;
    float msgTimer;
    int hoveredEdge;

    GameSession(int mode) : g(generateGraph(1)) {
        for (auto& vec : g.adj) sort(vec.begin(), vec.end());
        startNode = rand() % g.n;
        dfsTree = dfsSpanningTree(g, startNode);
        bfsTree = BFS_Tree(g, startNode);
        correct = (mode == 1) ? &dfsTree : &bfsTree;
        modeName = (mode == 1) ? "DFS" : "BFS";
        sel.assign(g.edges.size(), false);
        cnt = 0;
        need = g.n - 1;
        done = false;
        resultOk = false;
        message = "";
        msgTimer = 0;
        hoveredEdge = -1;
    }

    void toggleEdge(int idx) {
        if (idx < 0 || idx >= (int)g.edges.size()) return;
        if (sel[idx]) { sel[idx] = false; cnt--; }
        else if (cnt < need) { sel[idx] = true; cnt++; }
    }

    void hint() {
        for (auto& e : *correct) {
            for (int i = 0; i < (int)g.edges.size(); i++) {
                if ((g.edges[i].u==e.u && g.edges[i].v==e.v)||
                    (g.edges[i].u==e.v && g.edges[i].v==e.u)) {
                    if (!sel[i]) {
                        message = "Goi y: Canh " + to_string(i+1) +
                                  " (" + to_string(e.u) + "-" + to_string(e.v) + ")";
                        msgTimer = 3.0f;
                        return;
                    }
                }
            }
        }
        message = "Ban da chon het canh dung!";
        msgTimer = 2.0f;
    }

    bool check() {
        if (cnt != need) {
            message = "Chua du " + to_string(need) + " canh!";
            msgTimer = 2.0f;
            return false;
        }
        bool ok = true;
        for (int i = 0; i < (int)g.edges.size(); i++) {
            bool should = inTree(*correct, g.edges[i].u, g.edges[i].v);
            if (sel[i] != should) { ok = false; break; }
        }
        resultOk = ok;
        done = true;
        return ok;
    }
};

// ===================== DRAW EDGE LIST =====================
// Returns hovered edge index (-1 if none), clicked edge if clicked
int drawEdgeList(GameSession& gs, int listX, int listY, int listW) {
    int clicked = -1;
    int hovered = -1;
    int rowH = 38;
    Vector2 mouse = GetMousePosition();

    for (int i = 0; i < (int)gs.g.edges.size(); i++) {
        auto& e = gs.g.edges[i];
        Rectangle row = {(float)listX, (float)(listY + i*rowH), (float)listW, (float)(rowH-4)};

        bool hover = CheckCollisionPointRec(mouse, row);
        if (hover) hovered = i;

        // Row bg
        Color rowBg;
        if (gs.done) {
            bool should = inTree(*gs.correct, e.u, e.v);
            if (gs.sel[i] && should)  rowBg = {0,80,50,200};
            else if (gs.sel[i])       rowBg = {100,20,20,200};
            else if (should)          rowBg = {80,60,0,200};
            else                      rowBg = hover ? (Color){30,40,80,200} : BG_PANEL;
        } else {
            if (gs.sel[i])   rowBg = {20,60,100,220};
            else if (hover)  rowBg = {30,45,90,220};
            else             rowBg = BG_PANEL;
        }

        DrawRectangleRounded(row, 0.25f, 6, rowBg);
        if (gs.sel[i] || hover)
            DrawRectangleRoundedLinesEx(row, 0.25f, 6, 1.2f,
                gs.sel[i] ? ACCENT_CYAN : (Color){60,80,140,255});

        // Edge number
        char idx_lbl[8];
        sprintf(idx_lbl, "[%2d]", i+1);
        DrawText(idx_lbl, listX+10, listY + i*rowH + 10, 15, TEXT_DIM);

        // Nodes
        char edge_lbl[16];
        sprintf(edge_lbl, "%d --- %d", e.u, e.v);
        DrawText(edge_lbl, listX+58, listY + i*rowH + 10, 16,
                 gs.sel[i] ? ACCENT_CYAN : TEXT_MAIN);

        // Status icon
        if (gs.done) {
            bool should = inTree(*gs.correct, e.u, e.v);
            if (gs.sel[i] && should)  DrawText("[OK]",  listX+listW-55, listY+i*rowH+10, 15, ACCENT_GREEN);
            else if (gs.sel[i])       DrawText("[SAI]", listX+listW-60, listY+i*rowH+10, 15, ACCENT_RED);
            else if (should)          DrawText("[?]",   listX+listW-45, listY+i*rowH+10, 15, ACCENT_GOLD);
        } else if (gs.sel[i]) {
            DrawText("[X]", listX+listW-45, listY+i*rowH+10, 15, ACCENT_CYAN);
        }

        if (hover && IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && !gs.done)
            clicked = i;
    }

    gs.hoveredEdge = hovered;
    if (clicked >= 0) gs.toggleEdge(clicked);
    return hovered;
}

// ===================== PARTICLES =====================
struct Particle {
    Vector2 pos, vel;
    float life, maxLife;
    Color color;
};
vector<Particle> particles;

void spawnParticles(Vector2 pos, Color c, int count) {
    for (int i = 0; i < count; i++) {
        float angle = GetRandomValue(0, 360) * DEG2RAD;
        float speed = GetRandomValue(60, 200);
        particles.push_back({pos, {cosf(angle)*speed, sinf(angle)*speed},
                              1.2f, 1.2f, c});
    }
}

void updateDrawParticles(float dt) {
    for (auto& p : particles) {
        p.pos.x += p.vel.x * dt;
        p.pos.y += p.vel.y * dt;
        p.vel.y += 200 * dt;
        p.life -= dt;
        float t = p.life / p.maxLife;
        Color c = {p.color.r, p.color.g, p.color.b, (unsigned char)(t * 200)};
        DrawCircleV(p.pos, 4 * t + 1, c);
    }
    particles.erase(remove_if(particles.begin(), particles.end(),
        [](Particle& p){ return p.life <= 0; }), particles.end());
}

// ===================== DRAW BACKGROUND =====================
void drawBackground() {
    ClearBackground(BG_DARK);
    // Grid dots
    for (int x = 40; x < SCREEN_W; x += 50)
        for (int y = 40; y < SCREEN_H; y += 50)
            DrawCircleV({(float)x,(float)y}, 1.2f, {40,60,100,80});
    // Top gradient bar
    for (int i = 0; i < 4; i++)
        DrawRectangle(0, i, SCREEN_W, 1, {60,140,255, (unsigned char)(30-i*7)});
}

// ===================== DRAW MENU =====================
GameState drawMenu(int& chosenMode) {
    float t = GetTime();

    drawBackground();

    // Title box
    int bx = SCREEN_W/2 - 220, by = 110;
    DrawRectangleRounded({(float)bx,(float)by,440,100}, 0.2f, 8, BG_PANEL);
    DrawRectangleRoundedLinesEx({(float)bx,(float)by,440,100}, 0.2f, 8, 2.0f, ACCENT_BLUE);

    // Animated title
    const char* title = "BFS / DFS GAME";
    int fs = 38;
    int tw = MeasureText(title, fs);
    float wave = sinf(t*2) * 3;
    DrawText(title, SCREEN_W/2 - tw/2, by + 28 + wave, fs, ACCENT_CYAN);

    const char* sub = "Spanning Tree Challenge";
    int sw = MeasureText(sub, 16);
    DrawText(sub, SCREEN_W/2 - sw/2, by+78, 16, TEXT_DIM);

    // Description box
    DrawRectangleRounded({SCREEN_W/2-280.0f, 240, 560, 120}, 0.15f, 8, {18,28,55,220});
    DrawText("Chon dung cac canh tao nen cay khung", SCREEN_W/2-230, 265, 16, TEXT_MAIN);
    DrawText("theo thuat toan BFS hoac DFS.", SCREEN_W/2-170, 290, 16, TEXT_MAIN);
    DrawText("Dung canh -> Click canh / Click nut Check", SCREEN_W/2-230, 318, 15, TEXT_DIM);

    // Buttons
    Button btnDFS = {{(float)(SCREEN_W/2-240), 390, 220, 55}, "  PLAY DFS  ",
                     {30,60,130,255},{50,100,200,255},{20,40,90,255}};
    Button btnBFS = {{(float)(SCREEN_W/2+20), 390, 220, 55}, "  PLAY BFS  ",
                     {10,90,90,255},{20,160,155,255},{5,60,60,255}};
    Button btnExit= {{(float)(SCREEN_W/2-100), 470, 200, 45}, "  EXIT  ",
                     {60,30,30,255},{120,50,50,255},{40,20,20,255}};

    if (btnDFS.Draw())  { chosenMode=1; return PLAYING; }
    if (btnBFS.Draw())  { chosenMode=2; return PLAYING; }
    if (btnExit.Draw()) return (GameState)99; // exit signal

    // Footer
    DrawText("v1.0  |  Raylib Edition", SCREEN_W/2 - MeasureText("v1.0  |  Raylib Edition",14)/2,
             SCREEN_H-30, 14, TEXT_DIM);

    return MENU;
}

// ===================== DRAW PLAYING =====================
GameState drawPlaying(GameSession& gs, float dt) {
    drawBackground();

    // === LEFT PANEL: Graph Visual ===
    int gPanelX = 20, gPanelY = 60, gPanelW = 520, gPanelH = 580;
    DrawRectangleRounded({(float)gPanelX,(float)gPanelY,(float)gPanelW,(float)gPanelH},
                         0.05f, 8, BG_PANEL);
    DrawRectangleRoundedLinesEx({(float)gPanelX,(float)gPanelY,(float)gPanelW,(float)gPanelH},
                                0.05f, 8, 1.5f, {40,60,120,255});

    initNodePos(gPanelX, gPanelY, gPanelW, gPanelH);
    drawGraphVisual(gs.g, gs.sel, gs.correct, gs.startNode, gs.done, gs.hoveredEdge);

    // Panel title
    string ptitle = gs.modeName + " SPANNING TREE";
    DrawText(ptitle.c_str(), gPanelX+15, gPanelY+12, 18, ACCENT_CYAN);
    string stlbl = "Start: " + to_string(gs.startNode);
    DrawText(stlbl.c_str(), gPanelX+gPanelW-MeasureText(stlbl.c_str(),16)-12, gPanelY+14, 16, ACCENT_GOLD);

    // === RIGHT TOP: Info ===
    int rX = 555, rY = 60, rW = SCREEN_W-rX-15;
    DrawRectangleRounded({(float)rX,(float)rY,(float)rW,70}, 0.15f, 8, BG_PANEL);
    DrawRectangleRoundedLinesEx({(float)rX,(float)rY,(float)rW,70}, 0.15f, 8, 1.2f, {40,60,120,255});

    // Progress bar
    int barX = rX+10, barY = rY+40, barW = rW-20, barH = 16;
    DrawRectangleRounded({(float)barX,(float)barY,(float)barW,(float)barH}, 0.5f, 6, {20,30,60,255});
    float prog = gs.need > 0 ? (float)gs.cnt / gs.need : 0;
    if (prog > 0)
        DrawRectangleRounded({(float)barX,(float)barY,(float)(barW*prog),(float)barH},
                             0.5f, 6, ACCENT_CYAN);
    DrawRectangleRoundedLinesEx({(float)barX,(float)barY,(float)barW,(float)barH}, 0.5f, 6, 1.0f, {60,80,140,255});

    char prog_lbl[32];
    sprintf(prog_lbl, "Da chon: %d / %d canh", gs.cnt, gs.need);
    DrawText(prog_lbl, rX+14, rY+12, 16, TEXT_MAIN);

    // === RIGHT MID: Edge List ===
    int listX = rX, listY = rY+85, listW = rW;
    DrawRectangleRounded({(float)listX,(float)listY,(float)listW,
                          38.0f*(float)gs.g.edges.size()+10}, 0.05f, 8, BG_PANEL);
    DrawRectangleRoundedLinesEx({(float)listX,(float)listY,(float)listW,
                                  38.0f*(float)gs.g.edges.size()+10}, 0.05f, 8, 1.2f, {40,60,120,255});

    DrawText("DANH SACH CANH:", listX+10, listY+6, 14, TEXT_DIM);
    drawEdgeList(gs, listX+5, listY+28, listW-10);

    // === Buttons ===
    int listBottom = listY + 38*(int)gs.g.edges.size() + 18;
    int btnY = listBottom + 10;

    Button btnCheck = {{(float)rX, (float)btnY, (float)(rW/2-5), 44},
                        "  CHECK  ", {20,80,40,255},{40,150,70,255},{10,50,25,255}};
    Button btnHint  = {{(float)(rX+rW/2+5), (float)btnY, (float)(rW/2-5), 44},
                        "  HINT  ", {80,60,10,255},{150,120,20,255},{50,40,5,255}};
    Button btnBack  = {{(float)rX, (float)(btnY+54), (float)rW, 38},
                        "  BACK TO MENU  ", {60,20,20,255},{120,40,40,255},{40,10,10,255}};

    if (!gs.done) {
        if (btnCheck.Draw()) gs.check();
        if (btnHint.Draw())  gs.hint();
    }
    if (btnBack.Draw()) return MENU;

    // === Message ===
    if (gs.msgTimer > 0) {
        gs.msgTimer -= dt;
        float alpha = min(1.0f, gs.msgTimer);
        Color mc = {(unsigned char)(ACCENT_GOLD.r), (unsigned char)(ACCENT_GOLD.g),
                    (unsigned char)(ACCENT_GOLD.b), (unsigned char)(alpha*255)};
        int mw = MeasureText(gs.message.c_str(), 17);
        DrawRectangleRounded({(float)(SCREEN_W/2 - mw/2 - 18), SCREEN_H-70.0f,
                               (float)(mw+36), 38}, 0.3f, 8, {10,14,30,220});
        DrawText(gs.message.c_str(), SCREEN_W/2 - mw/2, SCREEN_H-58, 17, mc);
    }

    // === Result Banner ===
    if (gs.done) {
        float t = GetTime();
        const char* res = gs.resultOk ? "DUNG ROI! Chuc mung!" : "SAI! Xem dap an tren do thi.";
        Color rc = gs.resultOk ? ACCENT_GREEN : ACCENT_RED;
        int rw = MeasureText(res, 22);
        float wobble = sinf(t*4)*2;
        DrawRectangleRounded({SCREEN_W/2.0f - rw/2.0f - 24, 14.0f, (float)(rw+48), 42},
                             0.4f, 8, {10,14,30,230});
        DrawRectangleRoundedLinesEx({SCREEN_W/2.0f - rw/2.0f - 24, 14.0f, (float)(rw+48), 42},
                                    0.4f, 8, 2.0f, rc);
        DrawText(res, SCREEN_W/2 - rw/2, 24 + wobble, 22, rc);
    }

    updateDrawParticles(dt);

    return PLAYING;
}

// ===================== MAIN =====================
int main() {
    InitWindow(SCREEN_W, SCREEN_H, "BFS / DFS Spanning Tree Game");
    SetTargetFPS(60);
    srand(time(0));

    GameState state = MENU;
    int chosenMode = 1;
    GameSession* gs = nullptr;
    bool resultSpawned = false;

    while (!WindowShouldClose()) {
        float dt = GetFrameTime();
        BeginDrawing();

        if (state == MENU) {
            int mode = 1;
            GameState next = drawMenu(mode);
            if (next == PLAYING) {
                chosenMode = mode;
                delete gs;
                gs = new GameSession(chosenMode);
                resultSpawned = false;
                state = PLAYING;
            } else if ((int)next == 99) {
                break;
            }
        } else if (state == PLAYING && gs) {
            GameState next = drawPlaying(*gs, dt);

            // Spawn particles on result
            if (gs->done && !resultSpawned) {
                resultSpawned = true;
                Color pc = gs->resultOk ? ACCENT_GREEN : ACCENT_RED;
                for (int i = 0; i < 5; i++)
                    spawnParticles({(float)GetRandomValue(100, SCREEN_W-100),
                                    (float)GetRandomValue(100, 300)}, pc, 20);
            }

            if (next == MENU) state = MENU;
        }

        EndDrawing();
    }

    delete gs;
    CloseWindow();
    return 0;
}