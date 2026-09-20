#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int k=0;
	char a[105],b[105]={0};
	gets(a);
	char *token=strtok(a, " ");
	while(token!=NULL){
		b[a[k]++];
	}
	token=strtok(NULL, " ");
	for(int i=0 ;i<strlen(a);i++){
		if(k==1){
			printf("%s ",b[i]);
		}
	}
	printf("\n");
	return 0;
}