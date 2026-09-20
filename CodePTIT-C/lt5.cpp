#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b,c;
		scanf("%d %d %d", &a, &b,&c);
		if(a==c){
			printf("%d\n",b);
		}else if(a==b){
			printf("%d\n",c);
		}else if(b==c){
			printf("%d\n",a);
		}else{
			printf("moi nhap lai!\n");
		}
	}
	return 0;
}