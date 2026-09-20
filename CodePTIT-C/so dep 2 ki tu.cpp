#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check( char a[]){
	int l=0, k=strlen(a)-1;
	while(l<=k){
		if(a[l]!=a[k]){
			return 0; 
		}
		++l;
		k--;
	}
	return 1;
}
int phuc( char a[]){
	int r=0,p=strlen(a)-1;
	if(a[0]!='8'||a[p]!='8'){
		return 0;
	}
		for(int i=0;i<=p;i++){
		if(!isdigit(a[i])) return 0;
			 r=r+a[i]-'0';
		}
		return r%10==0;}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[1005];
		fgets(a,sizeof(a),stdin);
		if(check(a)&&phuc(a)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}}
		return 0;}
	
