#include <stdio.h>

int tn(int n){
	int s=0;
	int l=n;
	while(n>0){
		int g=n%10;
		s=s*10+g;
		n/=10;
	}
	if(s==l){
		return 1;
	}
	return 0;
}
int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	if(tn(a)&&tn(b)){
		printf("NO\n");
	}else if(tn(a)||tn(b)){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
	return 0;
}