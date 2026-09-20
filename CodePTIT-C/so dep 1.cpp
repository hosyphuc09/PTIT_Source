#include <stdio.h>
#include <math.h>

int check(int n){
	if(n==0||n==1) return 1;
	int a=1;
	int b=1;
	while(b<n){
		int t=b;
		b=a+b;
		a=t;
	}
	return (b==n);
}
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		int k=a;
		a=b;
		b=k;
	}
	for(int i=a;i<=b;i++){
		int sum=0;
		if(nt(i)){
			int f=i;
			while(f>0){
				int r=f%10;
				sum+=r;
				f/=10;
				
			}
			if(check(sum)){
				printf("%d ",i);
			}
		}
		
	}
	printf("\n");
	return 0;
}