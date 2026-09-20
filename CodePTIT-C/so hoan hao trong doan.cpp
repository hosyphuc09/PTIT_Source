#include <stdio.h>
#include <math.h>

int check(int n){
	if(n<2) return 0;
	int a=1;
	for(int i=2; i<=(int)sqrt(n); i++){
		if(n%i==0){
			a+=i;
		if(i!=n/i) 
		a+=n/i;	}
	}
	return a==n;
}
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if(a>b){
		int r;
		r=a;
		a=b;
		b=r;
	}
	for(int j=a; j<b; j++){
		if(check(j)){
			printf("%d ", j);
		}
	}
	return 0;
}
