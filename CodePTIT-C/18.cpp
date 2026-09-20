#include <stdio.h>
#include <string.h>

int main(){
	char c;
	scanf("%c",&c);
	char s[]="ilovepit";
	int f=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==c){
			f=1;
			break;
		}
	}
	if(f)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}