#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[100005];
		scanf("%s",s);
		int a[256]={0};
		for(int i=0;s[i];i++){
			if(!a[(int)s[i]]){
				printf("%c",s[i]);
				a[(int)s[i]]=1;
			}
		}
		printf("\n");
	}
	return 0;
}