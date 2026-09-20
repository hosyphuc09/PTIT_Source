#include <stdio.h>

int check(int n){
	int sum=0;
	while(n>0){
		sum +=n%10;
		n/=10;
			}
		return sum;
}
 int main(){
 	int a, b;
 	scanf("%d %d", &a, &b);
 	int sum1=check(a),sum2=check(b);
 	if(sum1>sum2){
 		printf("%d %d\n", b,a);
	 }else if(sum1<sum2){
	 	printf("%d %d\n", a,b);
	 }else{
	 	printf("%d %d\n", a,b);
	 }
	 return 0;
 }