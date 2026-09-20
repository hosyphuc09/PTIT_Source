#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
	char a[105],b[105];
	gets(a);
	gets(b);
	char *token=strtok(a, " ");
	while(token!=NULL){
		if(strcmp(token, b)!=0){
			printf("%s ",token);
		}
		token=strtok(NULL, " ");
	}
	printf("\n");
	return 0;
}