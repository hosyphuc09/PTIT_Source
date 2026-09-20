#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int sum=0;
		for(int i=1; i<=n;i++){
			for(int j=1; j<=(int)sqrt(n); j++){
				if(i==pow(2,j)){
					i=-i;
				}
			}
			sum+=i;
		
		printf("%d\n", sum);
			}}
			return 0;
}