#include <stdio.h>
#include <stdlib.h>
#define MAX 128

typedef long long ll;
ll be[MAX];
int total=0;
 void gen(){
 	ll x=1;
 	while(x<=1e18){
 		be[total++]=x;
 		if(x*3<=1e18)
 		be[total++]=x*3;
 		x *=2;
	 }
	 for(int i=0;i<total-1;i++){
	 	for(int j=i+1;j<total;j++){
		 
	 	if(be[i]>be[j]){
	 		ll temp = be[i];
	 		be[i]=be[j];
	 		be[j]=temp;
		 }
	 }
 }}
 int main(){
 	int t;
 	scanf("%d",&t);
 	gen();
 	while(t--){
 		ll n,res=0;
 		scanf("%lld",&n);
 		for(int i=0;i<total;i++){
 			if(be[i]<=n)
 			res=be[i];
 			else
 			break;
		 }
		 printf("%lld\n",res);
	 }
	 return 0;
 }
 
 
 
 
 
 