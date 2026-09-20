#include <stdio.h>

int check(int n){
	int donvi = n%10;
	while(n>=10){
		n/=10;}
		if(donvi==n){
			return 1;
		}
		else return 0;
	}
	

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if( check(n) == 1){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
		
	}
	return 0;
	}