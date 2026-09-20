#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	char a[1005];
	gets(a);
	strlwr(a);
	char *token=strtok(a," ");
	char b[100];
	int l=0;
	while(token!=NULL){
		b[l++]=*token;
		token=strtok(NULL," ");
	}
	for(int i=0;i<l;i++){
		int k=1;
		for(int j=i+1;j<l;j++){
			if(b[j]==b[i]){
				k++;
			}
		}
		printf("%s %d\n",b[i],k);
	}
	return 0;}