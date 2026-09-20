#include <stdio.h>
int check(long long n){
	int k=n%10;
	int f;
	while(n>0){
		 f=n%10;
		n/=10;
	}
	
	return ((f==2*k)||(k==2*f));
}
int check2(long long n){
	int a[100];
	int l=0;
	while(n>0){
		a[l++]=n%10;
		n/=10;
		
	}
	for(int i=1;i<=(l-1)/2;i++){
		if(a[i]!=a[l-1-i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(check(n)&&check2(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
	}
	return 0;
}