#include <bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node*left;
	node*right;
	node(int v){
		val=v;
		left=NULL;
		right=NULL;
	}
};
int get(node*root){
	if(root==NULL){
		return 0;
	}
	return 1+max(get(root->left),get(root->right));
}
void solve(){
	int n;cin>>n;
	node* mp[20005];
	int in[20005];
	for(int i=0;i<=20000;i++){
		mp[i]=NULL;
		in[i]=0;
	}
	
	for(int i=0;i<n;i++){
		int u,v;
		char x;
		cin>>u>>v>>x;
		
		int idxu=u+10000;
		int idxv=v+10000;
		if(mp[idxu]==NULL){
			mp[idxu]=new node(u);
		}
		if(mp[idxv]==NULL){
			mp[idxv]=new node(v);
		}
		if(x=='L'){
			mp[idxu]->left=mp[idxv];
		}else if(x=='R'){
			mp[idxu]->right=mp[idxv];
		}
		in[idxv]++;
	}
	node* root=NULL;
	for(int i=0;i<=20000;i++){
		if(mp[i]!=NULL&&in[i]==0){
			root=mp[i];
			break;
		}
	}
	cout<<get(root)<<"\n";
	for(int i=0;i<=20000;i++){
		if(mp[i]!=NULL){
			delete mp[i];
		}
}
}
int main(){
	int t;
	if(cin>>t){
		while(t--){
			solve();
		}
	}
	return 0;
}
