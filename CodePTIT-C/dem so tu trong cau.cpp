#include <stdio.h>
#include <string.h>
#include <ctype.h>

int demtu(char s[]){
	int k=0;
	int f=0;
	for(int i=0 ; s[i] != '\0' ; i++){
		if(!isspace(s[i])){
			if(!f){
				k++;
				f=1;}
			}else{
				f=0;
			}
	}
		return k;
}

int main() {
	int n; 
	char s[201];
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		fgets(s,sizeof(s),stdin);
		s[strcspn(s, "\n")]='0';
		printf("%d\n",demtu(s));
	}
		
	
	return 0;
}