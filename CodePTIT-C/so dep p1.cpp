#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		int a[100]={0},k=0;
		while(n>0){
			int r=n%10;
			a[k++]=r;
			n/=10;
		}
		for(int i=1;i<k/2;i++){
		if(a[i]==a[k-i-2]&&a[0]==(2*a[k-1])){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		}
	}
	return 0;
}