/*
 * ================================================
 *   KINGDOM CONQUEST - Game Chien Thuat 2D
 * ================================================
 * The loai : Strategy - Chiem linh lanh tho
 * Compiler : Dev-C++ (MinGW, Windows)
 *
 * Thuat toan:
 *   [DFS] -> Kiem tra vung lanh tho lien thong
 *            Tinh dien tich vung chiem duoc
 *            Phat hien vung bi bao vay
 *   [BFS] -> AI tim duong tan cong ngan nhat
 *            Tim o dat trong gan nhat de chiem
 *            Lan rong lanh tho theo lan song
 *
 * Dieu khien:
 *   W/A/S/D hoac phim mui ten = Di chuyen con tro
 *   SPACE / ENTER             = Chiem o dat
 *   S                         = Xem thong ke
 *   Q                         = Thoat
 * ================================================
 */

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <sstream>
#include <windows.h>
#include <conio.h>

using namespace std;

// ===== Fix MinGW cu khong co ENABLE_VIRTUAL_TERMINAL_PROCESSING =====
#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#endif

// ===== Bat mau ANSI =====
void enableANSI() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
    SetConsoleOutputCP(65001);
}

void hideCursor() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ci;
    ci.dwSize = 1;
    ci.bVisible = FALSE;
    SetConsoleCursorInfo(hOut, &ci);
}

// ===== Ma mau ANSI =====
#define RST     "\033[0m"
#define BOLD    "\033[1m"
#define DIM     "\033[2m"

// Foreground
#define FG_BLK  "\033[30m"
#define FG_RED  "\033[31m"
#define FG_GRN  "\033[32m"
#define FG_YLW  "\033[33m"
#define FG_BLU  "\033[34m"
#define FG_MAG  "\033[35m"
#define FG_CYN  "\033[36m"
#define FG_WHT  "\033[37m"

// Background
#define BG_BLK  "\033[40m"
#define BG_RED  "\033[41m"
#define BG_GRN  "\033[42m"
#define BG_YLW  "\033[43m"
#define BG_BLU  "\033[44m"
#define BG_MAG  "\033[45m"
#define BG_CYN  "\033[46m"
#define BG_WHT  "\033[47m"

// ===== Hang so ban do =====
const int MAP_W  = 20;
const int MAP_H  = 15;
const int MAX_TURNS = 30;

// Loai o dat
const int EMPTY   = 0;   // chua ai chiem
const int PLAYER  = 1;   // nguoi choi chiem
const int AI      = 2;   // AI chiem
const int MOUNTAIN= 3;   // nui - khong chiem duoc
const int FOREST  = 4;   // rung - kho chiem hon (AI phat hien cham hon)
const int CASTLE  = 5;   // lau dai - diem thuong cao

// ===== Cau truc =====
struct Point {
    int x, y;
    bool operator==(const Point& o) const { return x==o.x && y==o.y; }
};

struct GameState {
    int map[MAP_H][MAP_W];       // ban do chinh
    int territory[MAP_H][MAP_W]; // ai so huu o nao
    int cursor_x, cursor_y;      // vi tri con tro nguoi choi
    int player_score;
    int ai_score;
    int turn;
    int player_territory;        // so o nguoi choi dang so huu
    int ai_territory;
    bool game_over;
    string message;              // thong bao cuoi man hinh
    string ai_message;           // AI dang lam gi
};

GameState gs;

// ===== Sinh so ngau nhien =====
int randInt(int lo, int hi) {
    return lo + rand() % (hi - lo + 1);
}

// ===== KHOI TAO BAN DO =====
void initMap() {
    memset(gs.map, EMPTY, sizeof(gs.map));
    memset(gs.territory, EMPTY, sizeof(gs.territory));

    // Dat nui ngau nhien
    int num_mountains = 15;
    for (int i = 0; i < num_mountains; i++) {
        int x = randInt(1, MAP_W-2);
        int y = randInt(1, MAP_H-2);
        gs.map[y][x] = MOUNTAIN;
    }

    // Dat rung ngau nhien
    int num_forests = 20;
    for (int i = 0; i < num_forests; i++) {
        int x = randInt(0, MAP_W-1);
        int y = randInt(0, MAP_H-1);
        if (gs.map[y][x] == EMPTY)
            gs.map[y][x] = FOREST;
    }

    // Dat lau dai ngau nhien
    int num_castles = 6;
    for (int i = 0; i < num_castles; i++) {
        int x = randInt(2, MAP_W-3);
        int y = randInt(2, MAP_H-3);
        if (gs.map[y][x] == EMPTY)
            gs.map[y][x] = CASTLE;
    }

    // Dam bao goc player va AI la EMPTY
    gs.map[0][0] = EMPTY;
    gs.map[MAP_H-1][MAP_W-1] = EMPTY;

    // Nguoi choi bat dau goc trai tren
    gs.territory[0][0] = PLAYER;
    gs.territory[0][1] = PLAYER;
    gs.territory[1][0] = PLAYER;
    gs.player_score    = 3;

    // AI bat dau goc phai duoi
    gs.territory[MAP_H-1][MAP_W-1] = AI;
    gs.territory[MAP_H-1][MAP_W-2] = AI;
    gs.territory[MAP_H-2][MAP_W-1] = AI;
    gs.ai_score = 3;

    gs.cursor_x       = 2;
    gs.cursor_y       = 0;
    gs.turn           = 1;
    gs.player_territory = 3;
    gs.ai_territory     = 3;
    gs.game_over      = false;
    gs.message        = "Luot cua ban! Chiem dat de xay dung vuong quoc.";
    gs.ai_message     = "AI dang cho...";
}

// ===== DFS 1: KIEM TRA VUNG LIEN THONG =====
// Dem so o lien thong cua mot chu so huu tinh tu (sx, sy)
int dfs_countConnected(int sx, int sy, int owner) {
    if (sx < 0 || sx >= MAP_W || sy < 0 || sy >= MAP_H) return 0;
    if (gs.territory[sy][sx] != owner) return 0;

    vector<vector<bool>> visited(MAP_H, vector<bool>(MAP_W, false));
    stack<Point> stk;
    stk.push({sx, sy});
    visited[sy][sx] = true;
    int count = 0;

    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};

    while (!stk.empty()) {
        Point cur = stk.top(); stk.pop();
        count++;

        for (int d = 0; d < 4; d++) {
            int nx = cur.x + dx[d];
            int ny = cur.y + dy[d];
            if (nx>=0 && nx<MAP_W && ny>=0 && ny<MAP_H
                && !visited[ny][nx]
                && gs.territory[ny][nx] == owner) {
                visited[ny][nx] = true;
                stk.push({nx, ny});
            }
        }
    }
    return count;
}

// ===== DFS 2: KIEM TRA VUNG BAO VAY =====
// Neu nguoi choi bao vay 1 vung cua AI (khong co duong thoat ra bien)
// thi toan bo vung do bi chiem
bool dfs_canReachBorder(int sx, int sy, int owner,
                         vector<vector<bool>>& visited) {
    // Neu cham bien -> thoat duoc
    if (sx < 0 || sx >= MAP_W || sy < 0 || sy >= MAP_H) return true;
    if (visited[sy][sx]) return false;
    if (gs.territory[sy][sx] != owner) return false; // bi chan

    visited[sy][sx] = true;

    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};

    for (int d = 0; d < 4; d++) {
        int nx = sx + dx[d];
        int ny = sy + dy[d];
        // Bien ban do = thoat duoc
        if (nx<0||nx>=MAP_W||ny<0||ny>=MAP_H) return true;
        if (dfs_canReachBorder(nx, ny, owner, visited)) return true;
    }
    return false;
}

// Quet toan bo ban do, neu vung AI bi bao vay -> chuyen thanh Player
int dfs_checkSurround(int attacker, int defender) {
    int captured = 0;
    vector<vector<bool>> globalVisited(MAP_H, vector<bool>(MAP_W, false));

    for (int y = 0; y < MAP_H; y++) {
        for (int x = 0; x < MAP_W; x++) {
            if (gs.territory[y][x] == defender && !globalVisited[y][x]) {
                // Kiem tra xem vung nay co thoat ra bien khong
                vector<vector<bool>> visited(MAP_H, vector<bool>(MAP_W, false));
                bool canEscape = dfs_canReachBorder(x, y, defender, visited);

                // Danh dau da kiem tra
                for (int yy = 0; yy < MAP_H; yy++)
                    for (int xx = 0; xx < MAP_W; xx++)
                        if (visited[yy][xx]) globalVisited[yy][xx] = true;

                if (!canEscape) {
                    // Vung bi bao vay -> chiem toan bo
                    for (int yy = 0; yy < MAP_H; yy++)
                        for (int xx = 0; xx < MAP_W; xx++)
                            if (visited[yy][xx]) {
                                gs.territory[yy][xx] = attacker;
                                captured++;
                            }
                }
            }
        }
    }
    return captured;
}

// ===== BFS 1: AI TIM O TRONG GAN NHAT DE CHIEM =====
Point bfs_findNearestEmpty(int ownerType) {
    // Tim o EMPTY hoac FOREST hoac CASTLE gan lanh tho AI nhat
    vector<vector<bool>> visited(MAP_H, vector<bool>(MAP_W, false));
    queue<Point> q;

    // Them tat ca o AI vao queue
    for (int y = 0; y < MAP_H; y++)
        for (int x = 0; x < MAP_W; x++)
            if (gs.territory[y][x] == ownerType) {
                q.push({x, y});
                visited[y][x] = true;
            }

    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};

    while (!q.empty()) {
        Point cur = q.front(); q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = cur.x + dx[d];
            int ny = cur.y + dy[d];

            if (nx<0||nx>=MAP_W||ny<0||ny>=MAP_H) continue;
            if (visited[ny][nx]) continue;
            if (gs.map[ny][nx] == MOUNTAIN) continue; // khong qua nui

            visited[ny][nx] = true;

            // Tim thay o chua ai chiem hoac lanh tho doi thu
            if (gs.territory[ny][nx] == EMPTY
             || gs.territory[ny][nx] == PLAYER) {
                return {nx, ny};
            }

            // Neu van la lanh tho AI thi tiep tuc BFS
            if (gs.territory[ny][nx] == ownerType) {
                q.push({nx, ny});
            }
        }
    }
    return {-1, -1}; // Khong tim thay
}

// ===== BFS 2: AI LAN RONG THEO HUONG NGUOI CHOI =====
// Tim o PLAYER gan nhat de tan cong
Point bfs_findNearestEnemy(int ownerType, int enemyType) {
    vector<vector<bool>> visited(MAP_H, vector<bool>(MAP_W, false));
    queue<Point> q;

    for (int y = 0; y < MAP_H; y++)
        for (int x = 0; x < MAP_W; x++)
            if (gs.territory[y][x] == ownerType) {
                q.push({x, y});
                visited[y][x] = true;
            }

    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};

    while (!q.empty()) {
        Point cur = q.front(); q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = cur.x + dx[d];
            int ny = cur.y + dy[d];

            if (nx<0||nx>=MAP_W||ny<0||ny>=MAP_H) continue;
            if (visited[ny][nx]) continue;
            if (gs.map[ny][nx] == MOUNTAIN) continue;

            visited[ny][nx] = true;

            if (gs.territory[ny][nx] == enemyType) {
                return {nx, ny};
            }
            if (gs.territory[ny][nx] != MOUNTAIN) {
                q.push({nx, ny});
            }
        }
    }
    return {-1, -1};
}

// ===== TINH DIEM =====
int calcScore(int owner) {
    int score = 0;
    for (int y = 0; y < MAP_H; y++)
        for (int x = 0; x < MAP_W; x++)
            if (gs.territory[y][x] == owner) {
                if (gs.map[y][x] == CASTLE) score += 5;
                else if (gs.map[y][x] == FOREST) score += 2;
                else score += 1;
            }
    return score;
}

int countTerritory(int owner) {
    int cnt = 0;
    for (int y = 0; y < MAP_H; y++)
        for (int x = 0; x < MAP_W; x++)
            if (gs.territory[y][x] == owner) cnt++;
    return cnt;
}

// ===== LUOT AI =====
void aiTurn() {
    // AI co 2 hanh dong moi luot
    for (int action = 0; action < 2; action++) {

        // Chien luoc: neu AI dang thua -> tan cong; dang thang -> mo rong
        bool ai_winning = gs.ai_territory > gs.player_territory;

        Point target = {-1, -1};

        if (!ai_winning && gs.ai_territory > 5) {
            // Tan cong: BFS tim lanh tho Player gan nhat
            target = bfs_findNearestEnemy(AI, PLAYER);
            if (target.x != -1)
                gs.ai_message = "AI tan cong lanh tho cua ban! [BFS]";
        }

        if (target.x == -1) {
            // Mo rong: BFS tim o trong gan nhat
            target = bfs_findNearestEmpty(AI);
            if (target.x != -1)
                gs.ai_message = "AI mo rong lanh tho. [BFS]";
        }

        if (target.x == -1) continue;

        // Chiem o muc tieu
        int prev_owner = gs.territory[target.y][target.x];
        gs.territory[target.y][target.x] = AI;

        // Kiem tra bao vay bang DFS
        int surrounded = dfs_checkSurround(AI, PLAYER);
        if (surrounded > 0) {
            gs.ai_message = "AI bao vay va chiem " +
                            to_string(surrounded) +
                            " o cua ban! [DFS]";
        }
    }

    // Cap nhat lanh tho va diem
    gs.ai_territory   = countTerritory(AI);
    gs.player_territory = countTerritory(PLAYER);
    gs.ai_score       = calcScore(AI);
    gs.player_score   = calcScore(PLAYER);
}

// ===== NGUOI CHOI CHIEM O =====
bool playerCapture(int x, int y) {
    if (x < 0 || x >= MAP_W || y < 0 || y >= MAP_H) return false;
    if (gs.map[y][x] == MOUNTAIN) {
        gs.message = "Khong the chiem nui!";
        return false;
    }

    // Kiem tra o nay co ke canh voi lanh tho nguoi choi khong
    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};
    bool adjacent = false;
    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (nx>=0&&nx<MAP_W&&ny>=0&&ny<MAP_H
            && gs.territory[ny][nx] == PLAYER) {
            adjacent = true;
            break;
        }
    }

    if (!adjacent) {
        gs.message = "Phai chiem o ke canh lanh tho cua ban!";
        return false;
    }

    // Chiem o
    int prev_owner = gs.territory[y][x];
    gs.territory[y][x] = PLAYER;

    string cell_type = "";
    if (gs.map[y][x] == CASTLE) {
        cell_type = " [LAU DAI +5 diem!]";
    } else if (gs.map[y][x] == FOREST) {
        cell_type = " [RUNG +2 diem]";
    }

    // Kiem tra bao vay AI bang DFS
    int surrounded = dfs_checkSurround(PLAYER, AI);

    if (surrounded > 0) {
        gs.message = "Tuyet voi! Ban bao vay " + to_string(surrounded)
                   + " o cua AI! [DFS]" + cell_type;
    } else {
        gs.message = "Da chiem o (" + to_string(x) + ","
                   + to_string(y) + ")." + cell_type;
    }

    // Cap nhat so lieu
    gs.player_territory = countTerritory(PLAYER);
    gs.ai_territory     = countTerritory(AI);
    gs.player_score     = calcScore(PLAYER);
    gs.ai_score         = calcScore(AI);

    // AI di luot
    aiTurn();
    gs.turn++;

    // Kiem tra ket thuc
    if (gs.turn > MAX_TURNS
     || gs.player_territory == 0
     || gs.ai_territory == 0) {
        gs.game_over = true;
    }

    return true;
}

// ===== VE BAN DO =====
void render() {
    system("cls");

    // Header
    cout << BOLD << FG_YLW;
    cout << "+============================================================+\n";
    cout << "|              KINGDOM CONQUEST - Chien Thuat 2D            |\n";
    cout << "|          [DFS: Lanh tho lien thong & Bao vay]             |\n";
    cout << "|          [BFS: AI tim duong tan cong & mo rong]           |\n";
    cout << "+============================================================+\n";
    cout << RST;

    // Thanh trang thai
    cout << BOLD;
    cout << FG_BLU << "  [BAN]  " << RST;
    cout << "Lanh tho: " << FG_BLU << BOLD << gs.player_territory << RST;
    cout << "  Diem: " << FG_BLU << BOLD << gs.player_score << RST;

    cout << "     ";

    cout << FG_RED << "  [AI]  " << RST;
    cout << "Lanh tho: " << FG_RED << BOLD << gs.ai_territory << RST;
    cout << "  Diem: " << FG_RED << BOLD << gs.ai_score << RST;

    cout << "     ";
    cout << FG_YLW << "Luot: " << BOLD << gs.turn << "/" << MAX_TURNS << RST;
    cout << "\n\n";

    // Ve ban do
    // Vien tren
    cout << "  +";
    for (int x = 0; x < MAP_W; x++) cout << "--";
    cout << "+\n";

    for (int y = 0; y < MAP_H; y++) {
        cout << "  |";
        for (int x = 0; x < MAP_W; x++) {
            bool is_cursor = (x == gs.cursor_x && y == gs.cursor_y);

            // Mau nen theo lanh tho
            string bg = "";
            if      (gs.territory[y][x] == PLAYER) bg = BG_BLU;
            else if (gs.territory[y][x] == AI)     bg = BG_RED;
            else                                    bg = BG_BLK;

            // Ky hieu va mau chu theo loai o
            string fg   = "";
            string sym  = "";

            switch (gs.map[y][x]) {
                case MOUNTAIN:
                    fg  = FG_WHT; sym = "^^"; bg = BG_BLK; break;
                case FOREST:
                    fg  = FG_GRN; sym = "%%"; break;
                case CASTLE:
                    fg  = FG_YLW; sym = "CC"; break;
                default:
                    if (gs.territory[y][x] == PLAYER)
                        { fg = FG_WHT; sym = "  "; }
                    else if (gs.territory[y][x] == AI)
                        { fg = FG_WHT; sym = "  "; }
                    else
                        { fg = FG_BLK; sym = "  "; }
            }

            // Con tro nguoi choi
            if (is_cursor) {
                cout << BG_CYN << FG_BLK << BOLD << "[]" << RST;
            } else {
                cout << bg << fg << sym << RST;
            }
        }
        cout << "|\n";
    }

    // Vien duoi
    cout << "  +";
    for (int x = 0; x < MAP_W; x++) cout << "--";
    cout << "+\n";

    // Chu thich
    cout << "\n  " << BG_BLU << "  " << RST << " Ban  ";
    cout << BG_RED << "  " << RST << " AI  ";
    cout << FG_GRN << "%%" << RST << " Rung(+2)  ";
    cout << FG_YLW << "CC" << RST << " Lau dai(+5)  ";
    cout << FG_WHT << "^^" << RST << " Nui(chan)  ";
    cout << BG_CYN << FG_BLK << "[]" << RST << " Con tro";
    cout << "\n";

    // Thong bao
    cout << "\n  " << FG_CYN << BOLD << ">> " << gs.message << RST << "\n";
    cout << "  " << FG_RED << DIM << "AI: " << gs.ai_message << RST << "\n";

    // DFS info: so o lien thong lon nhat
    int connected = dfs_countConnected(0, 0, PLAYER);
    cout << "  " << FG_BLU << "[DFS] Vung lien thong lon nhat cua ban: "
         << connected << " o" << RST << "\n";

    // Dieu khien
    cout << FG_YLW;
    cout << "\n  +-- Dieu khien ------------------------------------+\n";
    cout << "  |  W/A/S/D hoac mui ten  = Di chuyen con tro    |\n";
    cout << "  |  SPACE hoac ENTER      = Chiem o hien tai     |\n";
    cout << "  |  R                     = Choi lai             |\n";
    cout << "  |  Q                     = Thoat                |\n";
    cout << "  +--------------------------------------------------+\n";
    cout << RST;
}

// ===== MAN HINH KET THUC =====
void renderGameOver() {
    system("cls");

    bool player_wins = gs.player_score > gs.ai_score;
    bool draw        = gs.player_score == gs.ai_score;

    cout << "\n\n";
    if (draw) {
        cout << BOLD << FG_YLW;
        cout << "  +=====================================+\n";
        cout << "  |          HOA! TRAN DAU CAM!         |\n";
        cout << "  +=====================================+\n";
        cout << RST;
    } else if (player_wins) {
        cout << BOLD << FG_GRN;
        cout << "  +=====================================+\n";
        cout << "  |     CHUC MUNG! BAN DA CHIEN THANG! |\n";
        cout << "  +=====================================+\n";
        cout << RST;
    } else {
        cout << BOLD << FG_RED;
        cout << "  +=====================================+\n";
        cout << "  |     AI DA CHIEN THANG! THAT BAI!   |\n";
        cout << "  +=====================================+\n";
        cout << RST;
    }

    cout << "\n  " << BOLD << FG_YLW << "Ket qua cuoi cung:\n" << RST;
    cout << "  " << FG_BLU << "  Ban : " << gs.player_score
         << " diem | " << gs.player_territory << " o dat\n" << RST;
    cout << "  " << FG_RED << "  AI  : " << gs.ai_score
         << " diem | " << gs.ai_territory << " o dat\n" << RST;

    cout << "\n  " << FG_CYN << "Thuat toan da su dung:\n" << RST;
    cout << "  [DFS] Kiem tra lanh tho lien thong\n";
    cout << "  [DFS] Phat hien va chiem vung bi bao vay\n";
    cout << "  [BFS] AI tim o trong gan nhat de mo rong\n";
    cout << "  [BFS] AI tim lanh tho dich de tan cong\n";

    cout << "\n  Nhan R de choi lai, Q de thoat...\n\n";
}

// ===== MAIN =====
int main() {
    enableANSI();
    hideCursor();
    srand((unsigned)time(NULL));

    // Man hinh chao
    system("cls");
    cout << BOLD << FG_YLW;
    cout << "\n\n";
    cout << "  +====================================================+\n";
    cout << "  |          KINGDOM CONQUEST                          |\n";
    cout << "  |          Game Chien Thuat 2D - Dev-C++             |\n";
    cout << "  +====================================================+\n";
    cout << RST;
    cout << "\n  Thuat toan su dung:\n";
    cout << FG_GRN << "  [DFS] " << RST << "Kiem tra vung lanh tho lien thong\n";
    cout << FG_GRN << "  [DFS] " << RST << "Phat hien vung AI bi bao vay -> tu dong chiem\n";
    cout << FG_BLU << "  [BFS] " << RST << "AI tim duong ngan nhat de mo rong lanh tho\n";
    cout << FG_BLU << "  [BFS] " << RST << "AI tan cong lanh tho nguoi choi\n";
    cout << "\n  Muc tieu: Chiem nhieu dat nhat trong " << MAX_TURNS << " luot!\n";
    cout << "  Meo: Bao vay lanh tho AI de chiem toan bo vung! [DFS]\n";
    cout << "\n  Nhan phim bat ky de bat dau...\n\n";
    _getch();

    initMap();

    while (true) {
        if (gs.game_over) {
            renderGameOver();
        } else {
            render();
        }

        int ch = _getch();

        // Xu ly phim mui ten Windows
        if (ch == 0 || ch == 224) {
            ch = _getch();
            switch (ch) {
                case 72: ch = 'w'; break;
                case 80: ch = 's'; break;
                case 75: ch = 'a'; break;
                case 77: ch = 'd'; break;
                default: ch = 0;
            }
        }

        if (ch == 'q' || ch == 'Q') break;

        if (ch == 'r' || ch == 'R') {
            initMap();
            continue;
        }

        if (gs.game_over) continue;

        // Di chuyen con tro
        int nx = gs.cursor_x;
        int ny = gs.cursor_y;

        if      (ch == 'w' || ch == 'W') ny--;
        else if (ch == 's' || ch == 'S') ny++;
        else if (ch == 'a' || ch == 'A') nx--;
        else if (ch == 'd' || ch == 'D') nx++;
        else if (ch == ' ' || ch == 13) {
            // SPACE hoac ENTER -> chiem o
            playerCapture(gs.cursor_x, gs.cursor_y);
            continue;
        }

        // Clamp con tro trong ban do
        if (nx >= 0 && nx < MAP_W) gs.cursor_x = nx;
        if (ny >= 0 && ny < MAP_H) gs.cursor_y = ny;
    }

    cout << RST << "\n  Cam on ban da choi! Hen gap lai!\n\n";
    return 0;
}
