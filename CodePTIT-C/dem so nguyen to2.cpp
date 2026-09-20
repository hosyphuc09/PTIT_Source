#include <stdio.h>
#include <math.h>

int check(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
		return 0;}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	
	int a, b, dem=0;
	scanf("%d %d", &a, &b);
	for(int j=a; j<b; j++){
		if(check(j)){
			++dem;
		}
	}
	printf("%d\n", dem);}
	return 0;
}