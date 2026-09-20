#include <bits/stdc++.h>
using namespace std;
int n;
void thap(int n,char A,char B,char C){
	if(n==1) {
		cout<<A<<" -> "<<C<<"\n";
		return ;
	}
	thap(n-1,A,C,B);
	cout<<A<<" -> "<<C<<"\n";
	thap(n-1,B,A,C);
}
int main(){
	cin>>n;
	thap(n,'A','B','C');
}
