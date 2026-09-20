#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int k=0;
	char c[100],b[100];
	gets(c);
	strlwr(c);
	char *token= strtok(c," ");
	while(token!=NULL){
	b[k++]=*token;
	token=strtok(NULL," ");	
	}
	for(int i=0;i<k;i++){
		int l=1;
		for(int j=i+1;j<k;j++){
			if(b[j]==b[i]){
				l++;
			}
		}
		printf("%c %d\n",b[i],l);
	}
	return 0;
}