#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a>b){
			int l=b;
			b=a;
			a=l;
		}
		while(a!=0){
			int r=b%a;
			b=a;
			a=r;
		}
		printf("%d\n",b);
	}
	return 0;
}