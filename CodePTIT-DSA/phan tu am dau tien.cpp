#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque<int> q;

    for (int i = 0; i < n; i++) {

        
        if (a[i] < 0) {
            q.push_back(i);
        }

      
        while (!q.empty() && q.front() < i - k + 1) {
            q.pop_front();
        }

        
        if (i >= k - 1) {

            if (q.empty()) {
                cout << 0 << " ";
            } else {
                cout << a[q.front()] << " ";
            }
        }
    }

    return 0;
}
