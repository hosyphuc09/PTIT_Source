#include <stdio.h>

int ucln(int a, int b){
	while(a!=0){
		int k=a;
		a=b%a;
		b=k;
	}
	return b;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		int l=n,f=0;
		while(n>0){
			int g=n%10;
			f=f*10+g;
			n/=10;
		}
		if(ucln(l,f)==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}