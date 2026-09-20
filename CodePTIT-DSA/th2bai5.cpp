#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
	node(int x){
		data=x;
		left =right=NULL;
	}
};
node*insertnode(node*root,int x){
	if(root==NULL) return new node(x);
	if(x<root->data){
		root->left=insertnode(root->left,x);
		
	}else{
		root->right=insertnode(root->right,x);
	}
	return root;
}
int height(node*root){
	if(root==NULL) return 0;
	return max(height(root->left),height(root->right))+1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		node*root=NULL;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			root=insertnode(root,x);
		}
		cout<<height(root)<<endl;
	}
	return 0;
}
