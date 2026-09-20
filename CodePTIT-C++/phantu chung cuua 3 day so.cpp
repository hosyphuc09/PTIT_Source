#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		set<string> s1;
		set<string> s2;
		set<string> s3;
		long long m[a],n[b],h[c];
		for(int i=0;i<a;i++){
			cin>>m[i];
			s1.insert(to_string(m[i]));
		}
		for(int i=0;i<b;i++){
			cin>>n[i];
			s2.insert(to_string(n[i]));
		}
		for(int i=0;i<c;i++){
			cin>>h[i];
			s3.insert(to_string(h[i]));
		}
		int d=0;
		for(int i=0;i<a;i++){
			if((s2.find(to_string(m[i]))!=s2.end())&&(s3.find(to_string(m[i]))!=s3.end())){
				cout<<m[i]<<" ";d++;
			}
		}
		
		if(d==0) cout<<"-1";
		cout<<endl;
	}
}
