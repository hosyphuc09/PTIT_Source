#include <stdio.h>

int check(int n){
	int r=n%10;
	n/=10;
	while(n!=0){
		if(r>n%10){
			return 0;
		}
		r=n%10;
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b, dem=0;
		scanf("%d %d", &a, &b);
		for(int i=a; i<=b;i++){
			if(check(i)){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
	return 0;
}