#include <stdio.h>
int check(int n){
	while(n>0){
		int r=n%10;
		
		if(r!=1&&r!=0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int n, dem=0;
	scanf("%d",&n);
	int i;
	for( i=1;i<=n;i++){
		
			if(check(i)){
				dem++;
			}
		}
		printf("%d",dem);
	
	return 0;}
