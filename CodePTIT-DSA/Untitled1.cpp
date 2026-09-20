#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string s;
        getline(cin, s);

        vector<int> a;
        stringstream ss(s);
        int m;

        while(ss >> m){
            a.push_back(m);
        }

        int i = a.size() - 1;

        // c?ng nh? phân
        while(i >= 0 && a[i] == 1){
            a[i] = 0;
            i--;
        }

        if(i >= 0){
            a[i] = 1;
        }

        // n?u c?n x? lý tru?ng h?p toàn 1:
        // else có th? thêm 1 ? d?u n?u d? yêu c?u

        for(auto x : a){
            cout << x;
        }
        cout << endl;
    }
}