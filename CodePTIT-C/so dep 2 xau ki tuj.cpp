#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>;
int check(char c[]){

	if(c[0]!='8'||c[strlen(c)-1]!='8'){
		return 0;
	}
	int sum=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]!=c[strlen(c)-1-i]){
			return 0;
		}
		sum+=c[i]-'0';
	}
	return (sum%10==0);
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
		}else{
			printf("NO\n");
		}
	}
	return 0;
}