#include <stdio.h>

int ucln(int a,int b){
	while(a!=0){
		int k=a;
		a=b%a;
		b=k;
		
	}
	return b;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int n=ucln(a,b);
		int m=ucln(c,d);
		if(n==m){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}