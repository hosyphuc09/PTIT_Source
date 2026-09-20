#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[105];
	char b[105][105];
	gets(a);
	int n=0;
	char *token=strtok(a, " ");
	while(token!=NULL){
		int f=0;
		for(int i=0;i<n;i++){
			if(strcmp(b[i],token)==0){
				f=1;
				break;
			}}
			if(!f){
				strcpy(b[n],token);
				n++;
			}
			token=strtok(NULL," ");
		
		}
		for(int i=0;i<n;i++){
			printf("%s ",b[i]);
		}
		printf("\n");
		return 0;
	}