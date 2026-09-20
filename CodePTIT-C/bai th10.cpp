#include <stdio.h>
#include <math.h>

int check(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum>n) return 1;
	return 0;
}
int main(){
	int a,b,k=0;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		if(check(i)){
			k++;
		}
	}
	printf("%d\n",k);
	return 0;
}