#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

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

int main(){
	char a[1005];
	scanf("%s",a);
	if(check(a)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;}
	