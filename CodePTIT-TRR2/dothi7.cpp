#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t;
	cin>>t;
	if(t==1){
		int n,m;
		cin>>n>>m;
		vector<pair<int,int>> res;
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			res.push_back({x,y});
		}
		vector<int> b(105);
		for(auto x:res){
			b[x.first]++;
			b[x.second]++;
		}
		for(int i=1;i<=n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	else if(t==2){
    int n;
    cin >> n;

    int c[105][105] = {0};
    vector<vector<int>> v(n);

    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    
    for(int i=0;i<n;i++){
        for(auto x : v[i]){
            c[i+1][x] = 1;   
        }
    }

    cout << n << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
	return 0;
} 
