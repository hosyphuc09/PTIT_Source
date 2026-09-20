#include <stdio.h>
#include <math.h>

int tn(int n){
	int f=0, l=n;
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
int tong(int n){
	int sum=0;
	while(n>0){
		int r=n%10;
		sum+=r;
		n/=10;
	}
	if(sum%10==0) return 1;
	return 0;
}
int check(int n){
	while(n>0){
		int r=n%10;
		n/=10;
		if(r==4){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long k=pow(10,n-1);
		long long m=pow(10,n);
		for(int i=k;i<m;i++){
			if(tn(i)&&tong(i)&&check(i)){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
	return 0;
}





