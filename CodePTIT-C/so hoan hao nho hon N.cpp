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
	int n;
	scanf("%d", &n);
	for(int j=2; j<n; j++){
		if(check(j)){
			printf("%d ", j);
		}
	}
	return 0;
}
