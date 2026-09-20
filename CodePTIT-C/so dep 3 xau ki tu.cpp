#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int check(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i]!=c[strlen(c)-1-i]){
			return 0;
		}
	}
	for(int i=0;i<strlen(c);i++){
		if(c[i]<'2'){
			return 0;
		}
		if(c[i]=='4'||c[i]=='6'||c[i]=='8'||c[i]=='9'){
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
		char c[505];
		gets(c);
		if(check(c)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		}
	return 0;
	
}