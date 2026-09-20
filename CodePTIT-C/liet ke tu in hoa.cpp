#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int check(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(islower(a[i])){
			return 0;
		}
	}
	return 1;
}
int main() {
	char a[105];
	gets(a);
	char *token=strtok(a, " ");

	while(token!=NULL) {
	
	if(check(token)){
		printf("%s ",token);}
	
		token=strtok(NULL, " ");
	}
	printf("\n");
return 0;
}