#include <stdio.h>
#include <math.h>

int check(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
			return 0;
		}
		return 1;
	}
int k(int n){
	while(n>0){
		int m=n%10;
		if(m!=2&&m!=3&&m!=5&&m!=7) {
		return 0;}
		n/=10;
	}
	return 1;
}
int nt(int n){
	return check(n) && k(n);
}

		
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int a,b,k=0;
	scanf("%d %d", &a, &b);
	for(int j=a; j<=b; j++){
		if(nt(j)){
			
					++k;
				}
			}
		
	
	printf("%d\n", k);
}
return 0;
}