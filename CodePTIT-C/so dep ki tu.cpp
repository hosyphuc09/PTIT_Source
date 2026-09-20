#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int check(char a[]){
	int l=0,t=strlen(a)-1;
	while(l<=t){
		if(a[l]!=a[t]){
			return 0;}
			
			++l;
			t--;
		
	}
	return 1;
}
int phuc(char a[])
{
	for(int i=0;i<strlen(a);i++){
		if(a[i]%2==1){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[1005];
		gets(a);
		
		
		if(check(a)&&phuc(a)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}