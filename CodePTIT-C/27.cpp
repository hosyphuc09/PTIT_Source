#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int k=1;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			k++;
		}
	}
	printf("%d\n",k);
	return 0;
}