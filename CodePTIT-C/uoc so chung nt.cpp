#include <stdio.h>
#include <math.h>

int ucln(int a,int b){
	if(a>b){
		int m=a;
		a=b;
		b=m;
	}
	while(a!=0){
		int k=a;
		a=b%a;
		b=k;	
	}
	return b;}
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d", &a, &b);
		int l=ucln(a,b);
		int sum=0;
		while(l>0){
			sum+=l%10;
			l/=10;
		}
		if(nt(sum)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}