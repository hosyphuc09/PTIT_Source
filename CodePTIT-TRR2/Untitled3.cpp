#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t, n;
    cin >> t;
    cin >> n;

    vector<int> deg(n + 1, 0);
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;

        deg[i] = k;

        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            a[i][v] = 1;
            a[v][i] = 1; 
        }
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg[i] << " ";
        }
    }
    else if (t == 2) {
        cout << n << endl;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

