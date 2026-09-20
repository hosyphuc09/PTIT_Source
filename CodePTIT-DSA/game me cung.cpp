/*
 * MAZE ADVENTURE - Game 2D su dung DFS va BFS
 * Tuong thich: Dev-C++ (MinGW), Windows
 *
 * Thuat toan:
 *   DFS  ->  Tao me cung ngau nhien
 *   BFS  ->  Tim duong ngan nhat (goi y)
 *
 * Dieu khien:
 *   W/A/S/D hoac phim mui ten  = Di chuyen
 *   H                           = Bat/tat goi y BFS
 *   R                           = Tao me cung moi
 *   Q                           = Thoat
 */

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <windows.h>
#include <conio.h>

using namespace std;

// ===== Dinh nghia neu MinGW cu chua co =====
#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#endif

// ===== ANSI Color codes =====
#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"
#define BG_BLUE     "\033[44m"
#define BG_GREEN    "\033[42m"
#define BG_RED      "\033[41m"
#define BG_YELLOW   "\033[43m"

// ===== Bat mau ANSI tren Windows =====
void enableANSI() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
    SetConsoleOutputCP(65001);
}

// ===== Hang so =====
const int WALL     = 0;
const int PATH     = 1;
const int START    = 2;
const int END_CELL = 3;
const int PLAYER   = 4;
const int BFS_PATH = 5;

const int WIDTH  = 21;  // phai le
const int HEIGHT = 21;  // phai le

// ===== Cau truc diem =====
struct Point {
    int x, y;
    bool operator==(const Point& o) const { return x == o.x && y == o.y; }
    bool operator!=(const Point& o) const { return !(*this == o); }
};

// ===== Bien toan cuc =====
int  maze[HEIGHT][WIDTH];
int  display_grid[HEIGHT][WIDTH];
Point playerPos, startPos, endPos;
int  moveCount = 0;
int  score     = 1000;
bool showHint  = false;
bool gameWon   = false;
vector<Point> bfsPath;

// ===== Sinh so ngau nhien don gian (khong can C++11) =====
int randInt(int lo, int hi) {
    return lo + rand() % (hi - lo + 1);
}

void shuffle_dirs(int dirs[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = dirs[i]; dirs[i] = dirs[j]; dirs[j] = tmp;
    }
}

// ===== DFS TAO ME CUNG =====
// Su dung stack tuong minh de tranh tran stack tren me cung lon
void dfs_generate(int startX, int startY) {
    // dx, dy buoc 2 o (nhay qua tuong)
    int dx[] = {0, 0, -2, 2};
    int dy[] = {-2, 2, 0, 0};

    stack<Point> stk;
    stk.push({startX, startY});
    maze[startY][startX] = PATH;

    while (!stk.empty()) {
        Point cur = stk.top();

        // Tim cac hang xom chua tham
        int dirs[4] = {0, 1, 2, 3};
        shuffle_dirs(dirs, 4);

        bool found = false;
        for (int i = 0; i < 4; i++) {
            int d  = dirs[i];
            int nx = cur.x + dx[d];
            int ny = cur.y + dy[d];

            if (nx > 0 && nx < WIDTH-1 && ny > 0 && ny < HEIGHT-1
                && maze[ny][nx] == WALL) {
                // Duc tuong giua cur va (nx,ny)
                maze[cur.y + dy[d]/2][cur.x + dx[d]/2] = PATH;
                maze[ny][nx] = PATH;
                stk.push({nx, ny});
                found = true;
                break;
            }
        }

        if (!found) stk.pop();
    }
}

// ===== BFS TIM DUONG NGAN NHAT =====
vector<Point> bfs_findPath(Point from, Point to) {
    vector<vector<bool>>  visited(HEIGHT, vector<bool>(WIDTH, false));
    vector<vector<Point>> parent(HEIGHT, vector<Point>(WIDTH, {-1, -1}));

    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1,  0, 0};

    queue<Point> q;
    q.push(from);
    visited[from.y][from.x] = true;

    while (!q.empty()) {
        Point cur = q.front(); q.pop();

        if (cur == to) {
            // Truy vet duong di
            vector<Point> path;
            Point p = to;
            while (!(p == from)) {
                path.push_back(p);
                p = parent[p.y][p.x];
            }
            reverse(path.begin(), path.end());
            return path;
        }

        for (int d = 0; d < 4; d++) {
            int nx = cur.x + dx[d];
            int ny = cur.y + dy[d];
            if (nx >= 0 && nx < WIDTH && ny >= 0 && ny < HEIGHT
                && !visited[ny][nx] && maze[ny][nx] != WALL) {
                visited[ny][nx] = true;
                parent[ny][nx]  = cur;
                q.push({nx, ny});
            }
        }
    }
    return {}; // Khong tim thay duong
}

// ===== KHOI TAO ME CUNG =====
void generateMaze() {
    // Dat tat ca la tuong
    for (int y = 0; y < HEIGHT; y++)
        for (int x = 0; x < WIDTH; x++)
            maze[y][x] = WALL;

    // Tao me cung bang DFS
    dfs_generate(1, 1);

    // Dat diem dau / cuoi
    startPos = {1, 1};
    endPos   = {WIDTH-2, HEIGHT-2};
    maze[startPos.y][startPos.x] = START;
    maze[endPos.y][endPos.x]     = END_CELL;
}

// ===== NEW GAME =====
void newGame() {
    srand((unsigned)time(NULL) + moveCount); // seed khac nhau moi lan
    generateMaze();
    bfsPath   = bfs_findPath(startPos, endPos);
    playerPos = startPos;
    moveCount = 0;
    score     = 1000;
    showHint  = false;
    gameWon   = false;
}

// ===== VE MAN HINH =====
void render() {
    // Sao chep maze vao display
    for (int y = 0; y < HEIGHT; y++)
        for (int x = 0; x < WIDTH; x++)
            display_grid[y][x] = maze[y][x];

    // Hien thi goi y BFS
    if (showHint) {
        for (int i = 0; i < (int)bfsPath.size(); i++) {
            Point& p = bfsPath[i];
            if (!(p == endPos))
                display_grid[p.y][p.x] = BFS_PATH;
        }
    }

    // Ve nguoi choi len tren cung
    display_grid[playerPos.y][playerPos.x] = PLAYER;

    system("cls");

    // Header
    cout << BOLD << CYAN;
    cout << "+==========================================+\n";
    cout << "|       *** MAZE ADVENTURE ***             |\n";
    cout << "|  DFS: Tao me cung | BFS: Tim duong ngan |\n";
    cout << "+==========================================+\n";
    cout << RESET;

    // Ve me cung
    for (int y = 0; y < HEIGHT; y++) {
        cout << "  ";
        for (int x = 0; x < WIDTH; x++) {
            switch (display_grid[y][x]) {
                case WALL:
                    cout << BG_BLUE << "  " << RESET;
                    break;
                case PATH:
                    cout << "  ";
                    break;
                case START:
                    cout << BG_GREEN << GREEN << BOLD << "S " << RESET;
                    break;
                case END_CELL:
                    cout << BG_RED << YELLOW << BOLD << "X " << RESET;
                    break;
                case PLAYER:
                    cout << BG_YELLOW << RED << BOLD << "O " << RESET;
                    break;
                case BFS_PATH:
                    cout << CYAN << ". " << RESET;
                    break;
                default:
                    cout << "  ";
            }
        }
        cout << "\n";
    }

    // Thong tin
    cout << "\n";
    cout << BOLD << WHITE;
    cout << "  Buoc di: " << YELLOW << moveCount << WHITE;
    cout << "   Diem: " << GREEN << score << WHITE;
    cout << "   Goi y BFS: " << (showHint ? (GREEN "BAT") : (RED "TAT"));
    cout << RESET << "\n";

    if (showHint && !bfsPath.empty()) {
        cout << CYAN << "  BFS ngan nhat tu vi tri hien tai: "
             << bfsPath.size() << " buoc\n" << RESET;
    }

    // Huong dan
    cout << CYAN;
    cout << "\n  +-- Dieu khien ----------------------------+\n";
    cout << "  |  W/A/S/D hoac mui ten  = Di chuyen      |\n";
    cout << "  |  H  = Bat/tat goi y BFS (-50 diem)      |\n";
    cout << "  |  R  = Tao me cung moi bang DFS           |\n";
    cout << "  |  Q  = Thoat                              |\n";
    cout << "  +------------------------------------------+\n";
    cout << RESET;

    cout << "\n  " << GREEN << "S" << RESET << " = Diem xuat phat";
    cout << "  " << RED << "X" << RESET << " = Dich (chiec lap!)";
    cout << "  " << YELLOW << "O" << RESET << " = Ban\n";
}

void renderWin() {
    system("cls");
    cout << "\n\n";
    cout << BOLD << GREEN;
    cout << "  +====================================+\n";
    cout << "  |                                    |\n";
    cout << "  |   *** CHUC MUNG! ***               |\n";
    cout << "  |   Ban da thoat khoi me cung!       |\n";
    cout << "  |                                    |\n";
    cout << "  +====================================+\n";
    cout << RESET;
    cout << YELLOW << BOLD;
    cout << "\n  Ket qua:\n";
    cout << "    Buoc di thuc te : " << moveCount << "\n";
    cout << "    Diem so cuoi    : " << max(0, score) << "\n";
    cout << "    BFS toi uu      : " << bfsPath.size() << " buoc\n";
    if (!bfsPath.empty()) {
        int eff = (int)((float)bfsPath.size() / moveCount * 100.0f);
        cout << "    Hieu suat       : " << eff << "% (so voi BFS)\n";
    }
    cout << RESET;
    cout << "\n  Nhan R de choi lai, Q de thoat...\n\n";
}

// ===== DI CHUYEN =====
void movePlayer(int dx, int dy) {
    int nx = playerPos.x + dx;
    int ny = playerPos.y + dy;

    if (nx < 0 || nx >= WIDTH || ny < 0 || ny >= HEIGHT) return;
    if (maze[ny][nx] == WALL) return;

    // Phuc hoi o cu
    if (!(playerPos == startPos))
        maze[playerPos.y][playerPos.x] = PATH;
    else
        maze[playerPos.y][playerPos.x] = START;

    playerPos = {nx, ny};
    moveCount++;
    score = max(0, score - 5);

    // Cap nhat BFS path neu dang hien goi y
    if (showHint) {
        bfsPath = bfs_findPath(playerPos, endPos);
    }

    // Kiem tra thang
    if (playerPos == endPos) {
        gameWon = true;
        // Tinh BFS cuoi cung de hien thi
        bfsPath = bfs_findPath(startPos, endPos);
    }
}

// ===== MAIN =====
int main() {
    enableANSI();

    // Man hinh chao
    system("cls");
    cout << BOLD << CYAN;
    cout << "\n\n";
    cout << "  +==========================================+\n";
    cout << "  |                                          |\n";
    cout << "  |       *** MAZE ADVENTURE ***             |\n";
    cout << "  |                                          |\n";
    cout << "  |  Thuat toan duoc su dung:                |\n";
    cout << "  |   [DFS] -> Tao me cung ngau nhien        |\n";
    cout << "  |   [BFS] -> Tim duong ngan nhat (goi y)   |\n";
    cout << "  |                                          |\n";
    cout << "  |       Nhan phim bat ky de bat dau...     |\n";
    cout << "  |                                          |\n";
    cout << "  +==========================================+\n";
    cout << RESET;
    _getch();

    newGame();

    while (true) {
        if (gameWon)
            renderWin();
        else
            render();

        int ch = _getch();

        // Xu ly phim mui ten (Windows gui 2 byte: 0 hoac 224, roi ma phim)
        if (ch == 0 || ch == 224) {
            ch = _getch();
            switch (ch) {
                case 72: ch = 'w'; break;  // Up
                case 80: ch = 's'; break;  // Down
                case 75: ch = 'a'; break;  // Left
                case 77: ch = 'd'; break;  // Right
                default: ch = 0;
            }
        }

        // Thoat
        if (ch == 'q' || ch == 'Q') break;

        // Tao me cung moi
        if (ch == 'r' || ch == 'R') {
            newGame();
            continue;
        }

        if (gameWon) continue;

        // Bat/tat goi y
        if (ch == 'h' || ch == 'H') {
            showHint = !showHint;
            if (showHint) {
                bfsPath = bfs_findPath(playerPos, endPos);
                score   = max(0, score - 50);
            }
            continue;
        }

        // Di chuyen
        int dx = 0, dy = 0;
        if      (ch == 'w' || ch == 'W') dy = -1;
        else if (ch == 's' || ch == 'S') dy =  1;
        else if (ch == 'a' || ch == 'A') dx = -1;
        else if (ch == 'd' || ch == 'D') dx =  1;

        if (dx || dy) movePlayer(dx, dy);
    }

    cout << RESET << "\n  Cam on ban da choi! Hen gap lai!\n\n";
    return 0;
}
