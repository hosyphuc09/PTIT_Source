#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void drawLine(int n);
void drawMenu();

// ================= STRUCT =================
struct Edge{
    int u,v;
};

struct Graph{
	
    int n;
    vector<vector<int>> adj;
    vector<Edge> edges;

    Graph(int n):n(n),adj(n){}

    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u,v});
    }
};

// ================= DFS =================

void dfsUtil(int u, vector<bool>& visited, vector<Edge>& tree, Graph& g){
    visited[u] = true;

    for(int v : g.adj[u]){
        if(!visited[v]){
            tree.push_back({u, v});
            dfsUtil(v, visited, tree, g);
        }
    }
}
vector<Edge> dfsSpanningTree(Graph& g, int start){
    vector<bool> visited(g.n, false);
    vector<Edge> tree;
    dfsUtil(start, visited, tree, g);
    return tree;
}

// ================= BFS =================
vector<Edge> BFS_Tree(Graph& g,int start){
    vector<bool> vis(g.n,false);
    vector<Edge> tree;
    queue<int> q;

    q.push(start);
    vis[start]=true;

    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v: g.adj[u]){
            if(!vis[v]){
                vis[v]=true;
                tree.push_back({u,v});
                q.push(v);
            }
        }
    }
    return tree;
}

// ================= CHECK =================
bool inTree(vector<Edge>& tree,int u,int v){
    for(auto &e:tree){
        if((e.u==u && e.v==v)||(e.u==v && e.v==u)) return true;
    }
    return false;
}

// ================= GRAPH =================
Graph generateGraph(int level) {
    Graph g(7);

    vector<pair<int,int>> base = {
        {0,1},{0,2},{1,3},{1,4},{2,5},{2,6}
    };

    random_shuffle(base.begin(), base.end());

    for(auto &e : base){
        g.addEdge(e.first, e.second);
    }

    vector<pair<int,int>> extra = {
        {3,4},{4,5},{5,6},{0,3},{1,6},{2,4}
    };

    random_shuffle(extra.begin(), extra.end());

    int extraEdges = 2 + level;

    for(int i = 0; i < extraEdges; i++){
        g.addEdge(extra[i].first, extra[i].second);
    }

    return g;
}

// ================= DRAW =================
void drawGraph(Graph& g, vector<bool>& sel){
   cout<<"\nEDGE LIST:\n";
for(int i=0;i<g.edges.size();i++){
    auto e=g.edges[i];

    cout<<" ["<<setw(2)<<i+1<<"] ";
    cout<<e.u<<" --- "<<e.v;

    if(sel[i]) cout<<"   [X]";
    cout<<"\n";
}
}

// ================= GAME =================
void play(int mode){
    int level = 1; 

    Graph g = generateGraph(level);  

   
    for(auto &vec : g.adj){
        sort(vec.begin(), vec.end());
    }

    
    int startNode = rand() % g.n;

    vector<Edge> dfsTree = dfsSpanningTree(g, startNode);
    vector<Edge> bfsTree = BFS_Tree(g, startNode);

    vector<Edge>* correct;
    string name;

    if(mode==1){correct=&dfsTree; name="DFS";}
    else{correct=&bfsTree; name="BFS";}

    vector<bool> sel(g.edges.size(),false);
    int cnt=0;
    int need=g.n-1;
    int hintIndex = 0;
    while(true){
        system("cls");

        drawLine(50);
        cout<<"        "<<name<<" SPANNING TREE GAME\n";
        drawLine(50);

        cout<<"Start Node: "<<startNode<<"\n";
        cout<<"Can chon: "<<need<<" canh\n";

        drawLine(50);
        drawGraph(g,sel);

        cout<<"\nDa chon: "<<cnt<<"/"<<need<<"\n";
        cout<<"Nhap (1-"<<g.edges.size()<<"), 0=check, H=hint, Q=thoat:\n";

        string input;
        cin >> input;

        // ===== HINT =====
        if(input == "h" || input == "H"){
    bool found = false;

    for(auto e : *correct){
        for(int i=0;i<g.edges.size();i++){
            if((g.edges[i].u == e.u && g.edges[i].v == e.v) ||
               (g.edges[i].u == e.v && g.edges[i].v == e.u)){

                // ch? g?i ? c?nh CHÝA ch?n
                if(!sel[i]){
                    cout<<"GOI Y: Canh so "<<i+1<<" ("<<e.u<<"-"<<e.v<<")\n";
                    found = true;
                    break;
                }
            }
        }
        if(found) break;
    }

    if(!found){
        cout<<"Ban da chon het cac canh dung!\n";
    }

    cout<<"Nhan Enter de tiep tuc...";
    cin.ignore();
    cin.get();

    continue;
}

        // ===== THOAT =====
        if(input == "q" || input == "Q"){
            cout<<"Thoat game...\n";
            return;
        }

        // ===== KIEM TRA INPUT SO =====
        bool isNumber = true;
        for(char c : input){
            if(!isdigit(c)){
                isNumber = false;
                break;
            }
        }

        if(!isNumber){
            cout<<"Nhap sai!\n";
            continue;
        }

        int x = stoi(input);

        // ===== CHECK =====
        if(x==0){
            if(cnt!=need){
                cout<<"Chua du!\n";
                system("pause");
                continue;
            }

            bool ok=true;
            for(int i=0;i<g.edges.size();i++){
                bool should=inTree(*correct,g.edges[i].u,g.edges[i].v);
                if(sel[i]!=should) ok=false;
            }

            if(ok) cout<<"Dung!\n";
            else cout<<"Sai!\n";

            cout<<"Dap an:\n";
            for(auto e:*correct) cout<<e.u<<"-"<<e.v<<" ";
            cout<<"\n";
            system("pause");
            return;
        }

        // ===== CHON CANH =====
        if(x>=1 && x<=g.edges.size()){
            int id=x-1;
            if(sel[id]){
                sel[id]=false;
                cnt--;
            } else if(cnt<need){
                sel[id]=true;
                cnt++;
            }
        }
    }
}
void drawLine(int n){
    for(int i=0;i<n;i++) cout<<"=";
    cout<<"\n";
}

void drawMenu(){
    system("cls");

    drawLine(40);
    cout<<"        DFS - BFS GAME\n";
    drawLine(40);

    cout<<"  [1] Play DFS Game\n";
    cout<<"  [2] Play BFS Game\n";
    cout<<"  [0] Exit\n";

    drawLine(40);
    cout<<"  Choose option: ";
}
// ================= MAIN =================
int main(){
	system("color 1F");
    srand(time(0));

    while(true){
    drawMenu();

    int c; cin>>c;

    if(c==1) play(1);
    else if(c==2) play(2);
    else break;
}
}
