#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	int n=a,m=b;
	int s=0, t=0,f=0,h=0;
	while(a>0){
		int g=a%10;
		s=s*10+g;
		a/=10;
	}
	if(s==n){
		f=1;
	}
	while(b>0){
		int l=b%10;
		t=t*10+l;
		b/=10;
	}
	if(t==m){
		h=1;
	}
	if(f==h){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
	return 0;
}