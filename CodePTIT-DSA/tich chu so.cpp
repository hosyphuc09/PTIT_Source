#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long p;
		cin>>p;
		vector<int> q;
		if(p==1){
			cout<<"1"<<endl;
			continue;
		}
		for(int i=9;i>=2;i--){
			while(p%i==0){
			
				q.push_back(i);
			
			p/=i;
		}
	}
	long long s=0;
	
	if(p!=1){
		cout<<"-1"<<endl;
	}else{
	sort(q.begin(),q.end());
	for(int i=0;i<q.size();i++){
		s=s*10+q[i];
	
	}
	cout<<s<<endl;
}

}
return 0;}
