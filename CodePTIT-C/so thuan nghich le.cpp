#include <stdio.h>

int tn(long long n){
	long long l=n;
	long long f=0;
	while(n>0){
		int g=n%10;
		f=f*10+g;
		n/=10;
	}
	if(l==f){
		return 1;
	}
	return 0;
}
int sle(long long n){
	while(n>0){
		int r=n%10;
		n/=10;
		if(r%2==1) return 1;
	}
	return 0;
}
int tong(long long n){
	int sum=0;
	while(n>0){
	
	int r=n%10;
	sum+=r;n/=10;
}
if(sum%2==1) return 1;
return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(tong(n)&&sle(n)&&tn(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}