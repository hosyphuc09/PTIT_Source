#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char a[1005],b[1005];
	gets(a);
	gets(b);
	int c[256]={0};
	for(int i=0;i<strlen(a);i++){
		c[a[i]]=1;
	}
	for(int i=0;i<strlen(b);i++){
		c[b[i]]=1;
	}
	for(int i=0;i<256;i++){
	if(c[i]==1){
	
	printf("%c",i);}}
	return 0;}
	