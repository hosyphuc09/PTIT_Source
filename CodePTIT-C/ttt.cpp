#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int n;
	
	char str[100];
	
	scanf("%d", &n);
	
	scanf("%s", &str);
	fgets(str, sizeof(str),stdin);
	char *t=strtok(str, " ");
	int min =atoi(t);
	while(t != NULL){
		int k=atoi(t);
		if(k<min){
			min =k;
		}
		t= strtok(NULL, " ");
	}
	
	
	printf("%d\n",min);
	return 0;
}