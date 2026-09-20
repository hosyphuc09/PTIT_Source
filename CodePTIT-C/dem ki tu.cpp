#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char a[100];
    fgets(a,sizeof(a),stdin);
    
	int  n=0,m=0,k=0;
	for(int i=0;a[i]!='\0';i++){
		if(isalpha(a[i])){
			n++;
		}else if(isdigit(a[i])){
			m++;
		}else if(a[i]!='\n'){
			k++;
		}
	}
	printf("%d %d %d",n,m,k);
	return 0;
}