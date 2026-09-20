#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	long long a[92];
	int n;
	scanf("%d", &n);
	a[1]=1;
	a[2]=1;


	
	for(int i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	printf("%lld\n",a[n]);}
	return 0;
}