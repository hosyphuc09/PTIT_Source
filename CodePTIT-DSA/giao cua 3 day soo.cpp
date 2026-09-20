#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        set<long long> s, l, res;

        for (int i = 0; i < x; ++i) {
            long long v; cin >> v;
            s.insert(v);
        }
        for (int i = 0; i < y; ++i) {
            long long v; cin >> v;
            if (s.find(v) != s.end()) l.insert(v);
        }
        for (int i = 0; i < z; ++i) {
            long long v; cin >> v;
            if (l.find(v) != l.end()) res.insert(v);
        }

        if (res.empty()) {
            cout << -1 << '\n';
        } else {
           
            for (auto v : res) {
               
                cout << v<<' ';
                
            }
            cout << '\n';
        }
    }
    return 0;
}
