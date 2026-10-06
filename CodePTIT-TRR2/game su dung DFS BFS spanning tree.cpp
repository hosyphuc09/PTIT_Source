#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

// ==================== MAU SAC ====================
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
// Mau: 1=Blue, 2=Green, 3=Cyan, 4=Red, 6=Yellow, 7=White, 9=LightBlue, 10=LightGreen, 12=LightRed, 14=LightYellow

void resetColor() { setColor(7); }

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() {
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 1;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void clearScreen() { system("cls"); }

// ==================== CAU TRUC DU LIEU ====================
struct Edge {
    int u, v, weight;
};

struct Graph {
    int n; // so dinh
    vector<vector<pair<int,int>>> adj; // adj[u] = {v, weight}
    vector<Edge> edges;
    
    Graph(int n) : n(n), adj(n) {}
    
    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        edges.push_back({u, v, w});
    }
};

// ==================== TRANG TRI ====================
void printBorder(int width, int color = 14) {
    setColor(color);
    cout << "+";
    for(int i = 0; i < width-2; i++) cout << "=";
    cout << "+" << endl;
    resetColor();
}

void printLine(string text, int width, int color = 7, char fill = ' ') {
    setColor(color);
    int pad = width - 2 - (int)text.length();
    int left = pad / 2;
    int right = pad - left;
    cout << "|";
    for(int i = 0; i < left; i++) cout << fill;
    cout << text;
    for(int i = 0; i < right; i++) cout << fill;
    cout << "|" << endl;
    resetColor();
}

// ==================== VE DO THI ====================
// Vi tri cac dinh tren man hinh (ASCII art layout)
struct Pos { int x, y; };

// Layout cho 7 dinh
Pos nodePos7[7] = {
    {20, 3},  // 0
    {10, 7},  // 1
    {30, 7},  // 2
    {5,  13}, // 3
    {17, 13}, // 4
    {25, 13}, // 5
    {35, 13}, // 6
};

void drawNode(int id, Pos p, int color, bool highlight = false) {
    gotoxy(p.x, p.y);
    setColor(color);
    if(highlight) {
        cout << "[" << id << "]";
    } else {
        cout << "(" << id << ")";
    }
    resetColor();
}

void drawEdgeLine(Pos p1, Pos p2, int color, int weight) {
    // Ve duong noi don gian giua 2 dinh (chi ve theo chieu ngang/doc)
    setColor(color);
    int mx = (p1.x + p2.x) / 2;
    int my = (p1.y + p2.y) / 2;
    
    // Hien thi trong so tai vi tri giua
    gotoxy(mx + 1, my);
    cout << weight;
    
    // Ve duong thang dung
    if(p1.x == p2.x) {
        for(int y = min(p1.y, p2.y)+1; y < max(p1.y, p2.y); y++) {
            gotoxy(p1.x+1, y);
            cout << "|";
        }
    }
    // Ve duong thang ngang
    else if(p1.y == p2.y) {
        for(int x = min(p1.x, p2.x)+3; x < max(p1.x, p2.x); x++) {
            gotoxy(x, p1.y);
            cout << "-";
        }
    }
    // Ve duong cheo (don gian)
    else {
        // Chi ve dau gach ngang o giua
        gotoxy(mx, my);
        cout << "~";
    }
    resetColor();
}

// ==================== DFS SPANNING TREE ====================
vector<Edge> dfsSpanningTree(Graph& g, int start) {
    vector<bool> visited(g.n, false);
    vector<Edge> spanTree;
    stack<int> st;
    
    st.push(start);
    visited[start] = true;
    
    while(!st.empty()) {
        int u = st.top(); st.pop();
        for(int i = 0; i < (int)g.adj[u].size(); i++) {
            int v = g.adj[u][i].first;
            int w = g.adj[u][i].second;
            if(!visited[v]) {
                visited[v] = true;
                spanTree.push_back({u, v, w});
                st.push(v);
            }
        }
    }
    return spanTree;
}

// ==================== BFS SPANNING TREE ====================
vector<Edge> bfsSpanningTree(Graph& g, int start) {
    vector<bool> visited(g.n, false);
    vector<Edge> spanTree;
    queue<int> q;
    
    q.push(start);
    visited[start] = true;
    
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(int i = 0; i < (int)g.adj[u].size(); i++) {
            int v = g.adj[u][i].first;
            int w = g.adj[u][i].second;
            if(!visited[v]) {
                visited[v] = true;
                spanTree.push_back({u, v, w});
                q.push(v);
            }
        }
    }
    return spanTree;
}

// ==================== KIEM TRA DAP AN ====================
bool edgeInTree(vector<Edge>& tree, int u, int v) {
    for(auto& e : tree) {
        if((e.u == u && e.v == v) || (e.u == v && e.v == u))
            return true;
    }
    return false;
}

// ==================== HIEN THI DO THI TRUC QUAN ====================
void displayGraphVisual(Graph& g, vector<Edge>& highlight, int startNode) {
    // Ve cac canh
    for(auto& e : g.edges) {
        bool inTree = edgeInTree(highlight, e.u, e.v);
        int color = inTree ? 10 : 8; // Xanh la = trong cay, xam = khong
        drawEdgeLine(nodePos7[e.u], nodePos7[e.v], color, e.weight);
    }
    // Ve cac dinh
    for(int i = 0; i < g.n; i++) {
        bool inTree = (i == startNode);
        for(auto& e : highlight) {
            if(e.u == i || e.v == i) { inTree = true; break; }
        }
        int color = (i == startNode) ? 14 : (inTree ? 10 : 8);
        drawNode(i, nodePos7[i], color, i == startNode);
    }
}

// ==================== MAN HINH MENU ====================
void showMainMenu() {
    clearScreen();
    hideCursor();
    
    setColor(14);
    cout << endl;
    cout << "  +==========================================================+" << endl;
    cout << "  |                                                          |" << endl;
    setColor(10);
    cout << "  |        *** SPANNING TREE ADVENTURE ***                   |" << endl;
    setColor(14);
    cout << "  |                                                          |" << endl;
    setColor(7);
    cout << "  |         Game hoc thuat toan Cay Khung                   |" << endl;
    cout << "  |         DFS Spanning Tree & BFS Spanning Tree           |" << endl;
    cout << "  |                                                          |" << endl;
    cout << "  +----------------------------------------------------------+" << endl;
    setColor(3);
    cout << "  |   [1]  Huong dan & Ly thuyet Cay Khung                  |" << endl;
    cout << "  |   [2]  Choi Game - DFS Spanning Tree                    |" << endl;
    cout << "  |   [3]  Choi Game - BFS Spanning Tree                    |" << endl;
    cout << "  |   [4]  Choi Game - Ket hop (DFS + BFS)                 |" << endl;
    cout << "  |   [5]  Xem vi du minh hoa tu dong                       |" << endl;
    cout << "  |   [0]  Thoat                                            |" << endl;
    setColor(14);
    cout << "  +==========================================================+" << endl;
    resetColor();
    cout << endl;
    cout << "  Chon: ";
}

// ==================== HUONG DAN LY THUYET ====================
void showTheory() {
    clearScreen();
    setColor(14);
    cout << "\n  +============================================================+" << endl;
    cout << "  |               LY THUYET CAY KHUNG (SPANNING TREE)        |" << endl;
    cout << "  +============================================================+" << endl;
    resetColor();
    
    setColor(10);
    cout << "\n  [DINH NGHIA]" << endl;
    setColor(7);
    cout << "  Cay khung cua do thi G la mot cay con cua G chua tat ca" << endl;
    cout << "  cac dinh va mot so canh de tao thanh cay (khong co chu trinh)." << endl;
    
    setColor(10);
    cout << "\n  [TINH CHAT]" << endl;
    setColor(7);
    cout << "  - Do thi n dinh co cay khung voi dung (n-1) canh" << endl;
    cout << "  - Cay khung lien ket tat ca cac dinh" << endl;
    cout << "  - Khong co chu trinh (vong lap)" << endl;
    
    setColor(3);
    cout << "\n  [DFS SPANNING TREE - Cay khung theo DFS]" << endl;
    setColor(7);
    cout << "  - Duyet theo chieu sau (depth-first)" << endl;
    cout << "  - Su dung STACK (ngan xep)" << endl;
    cout << "  - Di sau nhat co the truoc khi quay lui" << endl;
    cout << "  - Thuong tao cay co nhieu nhanh thang dung" << endl;
    
    setColor(9);
    cout << "\n  [BFS SPANNING TREE - Cay khung theo BFS]" << endl;
    setColor(7);
    cout << "  - Duyet theo chieu rong (breadth-first)" << endl;
    cout << "  - Su dung QUEUE (hang doi)" << endl;
    cout << "  - Duyet het hang xom truoc khi di sau" << endl;
    cout << "  - Tao cay theo tung muc (level-order)" << endl;
    
    setColor(14);
    cout << "\n  [SO SANH]" << endl;
    setColor(7);
    cout << "  DFS: Di sau -> Cay co nhieu tang, it nhanh ngang" << endl;
    cout << "  BFS: Di rong -> Cay co nhieu nhanh ngang, tang thap hon" << endl;
    
    setColor(14);
    cout << "\n  +============================================================+" << endl;
    resetColor();
    cout << "\n  Nhan phim bat ky de quay lai...";
    cin.ignore(); cin.get();
}

// ==================== TAO DO THI NGAU NHIEN ====================
Graph generateGraph(int level) {
    // 7 dinh co dinh, canh thay doi theo level
    Graph g(7);
    
    // Canh co ban (dam bao lien thong)
    g.addEdge(0, 1, rand()%9+1);
    g.addEdge(0, 2, rand()%9+1);
    g.addEdge(1, 3, rand()%9+1);
    g.addEdge(1, 4, rand()%9+1);
    g.addEdge(2, 5, rand()%9+1);
    g.addEdge(2, 6, rand()%9+1);
    
    // Canh phu tuy theo level
    if(level >= 1) g.addEdge(3, 4, rand()%9+1);
    if(level >= 2) g.addEdge(4, 5, rand()%9+1);
    if(level >= 3) {
        g.addEdge(5, 6, rand()%9+1);
        g.addEdge(0, 4, rand()%9+1);
    }
    return g;
}

// ==================== VE DO THI CHO GAME ====================
void drawGameGraph(Graph& g, vector<bool>& selectedEdges, vector<Edge>& correctTree, bool showCorrect = false) {
    // Ve canh
    for(int i = 0; i < (int)g.edges.size(); i++) {
        auto& e = g.edges[i];
        int color;
        if(showCorrect && edgeInTree(correctTree, e.u, e.v))
            color = 10; // xanh la = dap an
        else if(selectedEdges[i])
            color = 14; // vang = da chon
        else
            color = 8; // xam = chua chon
        drawEdgeLine(nodePos7[e.u], nodePos7[e.v], color, e.weight);
        // Hien thi so thu tu canh
        int mx = (nodePos7[e.u].x + nodePos7[e.v].x)/2 - 1;
        int my = (nodePos7[e.u].y + nodePos7[e.v].y)/2 + 1;
        gotoxy(mx, my);
        setColor(6);
        cout << "E" << i+1;
        resetColor();
    }
    // Ve dinh
    for(int i = 0; i < g.n; i++) {
        drawNode(i, nodePos7[i], 10, false);
    }
}

// ==================== GAME CHINH ====================
void playGame(int mode) {
    // mode: 1=DFS, 2=BFS, 3=ket hop
    srand(time(0));
    
    int score = 0;
    int round = 1;
    int maxRound = 3;
    
    while(round <= maxRound) {
        clearScreen();
        hideCursor();
        
        int level = round - 1;
        Graph g = generateGraph(level);
        int startNode = rand() % g.n;
        
        // Tinh cay khung dung
        vector<Edge> dfsTree = dfsSpanningTree(g, startNode);
        vector<Edge> bfsTree = bfsSpanningTree(g, startNode);
        
        vector<Edge>* correctTree;
        string modeName;
        
        if(mode == 1) { correctTree = &dfsTree; modeName = "DFS"; }
        else if(mode == 2) { correctTree = &bfsTree; modeName = "BFS"; }
        else {
            // Round le = DFS, round chan = BFS
            if(round % 2 == 1) { correctTree = &dfsTree; modeName = "DFS"; }
            else { correctTree = &bfsTree; modeName = "BFS"; }
        }
        
        vector<bool> selected(g.edges.size(), false);
        
        // Hien thi giao dien game
        setColor(14);
        gotoxy(0, 0);
        cout << "  +=== SPANNING TREE GAME =========== Round " << round << "/" << maxRound 
             << " === Score: " << score << " ==+" << endl;
        setColor(3);
        cout << "  | Thuat toan: " << modeName << " Spanning Tree";
        cout << "   Dinh xuat phat: [" << startNode << "]" << endl;
        setColor(7);
        cout << "  | Chon " << g.n-1 << " canh tao thanh cay khung " << modeName << " tu dinh " << startNode << endl;
        cout << "  | (Canh: ";
        setColor(6); cout << "E1-E" << g.edges.size();
        setColor(7); cout << " | ";
        setColor(14); cout << "Vang=Da chon";
        setColor(7); cout << " | ";
        setColor(10); cout << "Xanh=Dung";
        setColor(7); cout << ")" << endl;
        setColor(14);
        cout << "  +======================================================================+" << endl;
        resetColor();
        
        // Ve do thi
        drawGameGraph(g, selected, *correctTree);
        
        // Hien thi thong tin canh
        gotoxy(0, 17);
        setColor(3);
        cout << "  [DANH SACH CANH]" << endl;
        resetColor();
        for(int i = 0; i < (int)g.edges.size(); i++) {
            auto& e = g.edges[i];
            if(selected[i]) setColor(14); else setColor(7);
            cout << "  E" << i+1 << ": " << e.u << "-" << e.v << "(w=" << e.weight << ")  ";
            if((i+1) % 4 == 0) cout << endl;
        }
        resetColor();
        
        // Vong nhap
        int numSelected = 0;
        bool done = false;
        
        while(!done) {
            gotoxy(0, 23);
            setColor(7);
            cout << "  Chon canh (1-" << g.edges.size() << ") de toggle, 0=kiem tra, 9=bo qua: ";
            cout << "  Da chon: " << numSelected << "/" << (g.n-1) << "  ";
            
            int choice;
            gotoxy(52, 23);
            cin >> choice;
            
            if(choice == 0) {
                // Kiem tra dap an
                if(numSelected != g.n-1) {
                    gotoxy(0, 25);
                    setColor(12);
                    cout << "  Phai chon dung " << g.n-1 << " canh! Ban con thieu canh.          ";
                    resetColor();
                } else {
                    // So sanh voi cay dung
                    bool correct = true;
                    for(int i = 0; i < (int)g.edges.size(); i++) {
                        bool shouldSelect = edgeInTree(*correctTree, g.edges[i].u, g.edges[i].v);
                        if(selected[i] != shouldSelect) { correct = false; break; }
                    }
                    
                    gotoxy(0, 25);
                    if(correct) {
                        setColor(10);
                        cout << "  *** CHINH XAC! *** Cay khung " << modeName << " dung! +10 diem!     ";
                        score += 10;
                    } else {
                        setColor(12);
                        cout << "  SAI ROI! Hien thi dap an dung:                              ";
                        // Hien thi dap an
                        Sleep(1000);
                        for(int i = 0; i < (int)g.edges.size(); i++) {
                            selected[i] = edgeInTree(*correctTree, g.edges[i].u, g.edges[i].v);
                        }
                        // Ve lai
                        drawGameGraph(g, selected, *correctTree, true);
                    }
                    resetColor();
                    Sleep(2000);
                    done = true;
                }
            } else if(choice == 9) {
                // Bo qua, hien thi dap an
                for(int i = 0; i < (int)g.edges.size(); i++) {
                    selected[i] = edgeInTree(*correctTree, g.edges[i].u, g.edges[i].v);
                }
                drawGameGraph(g, selected, *correctTree, true);
                gotoxy(0, 25);
                setColor(6);
                cout << "  Da hien thi dap an. Khong tinh diem.                       ";
                resetColor();
                Sleep(2000);
                done = true;
            } else if(choice >= 1 && choice <= (int)g.edges.size()) {
                // Toggle canh
                int idx = choice - 1;
                if(selected[idx]) {
                    selected[idx] = false;
                    numSelected--;
                } else {
                    if(numSelected < g.n-1) {
                        selected[idx] = true;
                        numSelected++;
                    }
                }
                // Ve lai do thi
                drawGameGraph(g, selected, *correctTree);
                // Cap nhat danh sach
                gotoxy(0, 18);
                for(int i = 0; i < (int)g.edges.size(); i++) {
                    auto& e = g.edges[i];
                    if(selected[i]) setColor(14); else setColor(7);
                    cout << "  E" << i+1 << ": " << e.u << "-" << e.v << "(w=" << e.weight << ")  ";
                    if((i+1) % 4 == 0) cout << endl;
                }
                resetColor();
            }
        }
        round++;
    }
    
    // Ket qua cuoi game
    clearScreen();
    setColor(14);
    cout << "\n\n";
    cout << "  +================================================+" << endl;
    cout << "  |           KET QUA CUOI GAME                    |" << endl;
    cout << "  +================================================+" << endl;
    
    if(score >= 20) {
        setColor(10);
        cout << "  |   *** XUAT SAC! *** Ban la chuyen gia Graph!  |" << endl;
    } else if(score >= 10) {
        setColor(3);
        cout << "  |   *** KHA TOT! *** Tiep tuc luyen tap nhe!    |" << endl;
    } else {
        setColor(7);
        cout << "  |   Hay hoc lai ly thuyet va thu lai nhe!        |" << endl;
    }
    
    setColor(14);
    cout << "  |                                                |" << endl;
    cout << "  |   Diem cua ban: " << score << "/" << maxRound * 10;
    cout << "                         |" << endl;
    cout << "  +================================================+" << endl;
    resetColor();
    cout << "\n  Nhan phim bat ky de quay lai menu...";
    cin.ignore(); cin.get();
}

// ==================== DEMO TU DONG ====================
void showDemo() {
    clearScreen();
    hideCursor();
    
    Graph g(7);
    g.addEdge(0, 1, 4);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 4, 5);
    g.addEdge(2, 5, 6);
    g.addEdge(2, 6, 1);
    g.addEdge(3, 4, 3);
    g.addEdge(4, 5, 2);
    
    // ---- DFS ----
    clearScreen();
    gotoxy(0,0);
    setColor(14);
    cout << "  +=== DEMO: DFS SPANNING TREE ==================================+" << endl;
    setColor(3);
    cout << "  | Bat dau tu dinh 0, duyet theo chieu sau (dung STACK)        |" << endl;
    setColor(14);
    cout << "  +==============================================================+" << endl;
    resetColor();
    
    vector<Edge> dfsTree = dfsSpanningTree(g, 0);
    
    // Hien thi tung buoc DFS
    vector<bool> visited(7, false);
    stack<int> st;
    st.push(0); visited[0] = true;
    
    vector<Edge> current;
    int step = 0;
    
    // Reset va ve lai
    vector<Edge> empty;
    displayGraphVisual(g, empty, 0);
    
    gotoxy(0, 17);
    setColor(6);
    cout << "  Buoc DFS:" << endl;
    
    // Simulate DFS step by step
    while(!st.empty()) {
        int u = st.top(); st.pop();
        gotoxy(0, 18 + step);
        setColor(7);
        cout << "  -> Xu ly dinh " << u << ": ";
        
        for(int i = 0; i < (int)g.adj[u].size(); i++) {
            int v = g.adj[u][i].first;
            int w = g.adj[u][i].second;
            if(!visited[v]) {
                visited[v] = true;
                current.push_back({u, v, w});
                cout << u << "->" << v << " ";
                st.push(v);
            }
        }
        cout << endl;
        step++;
        
        displayGraphVisual(g, current, 0);
        Sleep(800);
    }
    
    gotoxy(0, 18 + step + 1);
    setColor(10);
    cout << "  === Cay khung DFS hoan chinh! === " << g.n-1 << " canh ===" << endl;
    setColor(7);
    cout << "  Cac canh trong cay: ";
    for(auto& e : dfsTree) cout << e.u << "-" << e.v << " ";
    resetColor();
    cout << "\n\n  Nhan phim bat ky xem tiep BFS...";
    cin.ignore(); cin.get();
    
    // ---- BFS ----
    clearScreen();
    gotoxy(0,0);
    setColor(14);
    cout << "  +=== DEMO: BFS SPANNING TREE ==================================+" << endl;
    setColor(9);
    cout << "  | Bat dau tu dinh 0, duyet theo chieu rong (dung QUEUE)       |" << endl;
    setColor(14);
    cout << "  +==============================================================+" << endl;
    resetColor();
    
    vector<Edge> bfsTree = bfsSpanningTree(g, 0);
    
    fill(visited.begin(), visited.end(), false);
    queue<int> q;
    q.push(0); visited[0] = true;
    
    current.clear();
    step = 0;
    
    displayGraphVisual(g, empty, 0);
    
    gotoxy(0, 17);
    setColor(6);
    cout << "  Buoc BFS:" << endl;
    
    while(!q.empty()) {
        int u = q.front(); q.pop();
        gotoxy(0, 18 + step);
        setColor(7);
        cout << "  -> Xu ly dinh " << u << ": ";
        
        for(int i = 0; i < (int)g.adj[u].size(); i++) {
            int v = g.adj[u][i].first;
            int w = g.adj[u][i].second;
            if(!visited[v]) {
                visited[v] = true;
                current.push_back({u, v, w});
                cout << u << "->" << v << " ";
                q.push(v);
            }
        }
        cout << endl;
        step++;
        
        displayGraphVisual(g, current, 0);
        Sleep(800);
    }
    
    gotoxy(0, 18 + step + 1);
    setColor(10);
    cout << "  === Cay khung BFS hoan chinh! === " << g.n-1 << " canh ===" << endl;
    setColor(7);
    cout << "  Cac canh trong cay: ";
    for(auto& e : bfsTree) cout << e.u << "-" << e.v << " ";
    resetColor();
    
    cout << "\n\n  Nhan phim bat ky de quay lai menu...";
    cin.get();
}

// ==================== MAIN ====================
int main() {
    SetConsoleOutputCP(CP_UTF8);
    // Dat kich thuoc cua so console
    system("mode con: cols=80 lines=35");
    SetConsoleTitle("Spanning Tree Adventure - Game C++");
    
    srand(time(0));
    hideCursor();
    
    int choice;
    do {
        showMainMenu();
        cin >> choice;
        
        switch(choice) {
            case 1: showTheory(); break;
            case 2: playGame(1); break; // DFS only
            case 3: playGame(2); break; // BFS only
            case 4: playGame(3); break; // Mixed
            case 5: showDemo();  break;
            case 0:
                clearScreen();
                setColor(10);
                cout << "\n\n  Cam on ban da choi! Hen gap lai! :)\n\n";
                resetColor();
                break;
            default:
                setColor(12);
                cout << "\n  Lua chon khong hop le!";
                resetColor();
                Sleep(800);
        }
    } while(choice != 0);
    
    return 0;
}
