#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int n,a,sum=0;
	scanf("%d", &n);
	while(n>0){
		a=n%10;
		sum+=a;
		n/=10;
	}
	int k;
	k=sum%10;
	if(k==0){
		printf("YES\n");
	}else {
		printf("NO\n");
	}}
	return 0;
}