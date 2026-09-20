#include <stdio.h>

long long check(int n){
	long long k=1;
	for(int i=1; i<=n; i++){
		k*=i;
	}
	return k;
}
int main(){
	int n;
	scanf("%d", &n);
	
	for(int j=1;j<n; j++){
		int f=j,sum=0;
	while(f>0){
		
		int r=f%10;
	
		sum+=check(r);
			f/=10;
	}
	if(sum==j){
	printf("%d ", j);
}}
printf("\n");

return 0;
}