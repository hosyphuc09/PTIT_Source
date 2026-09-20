#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int sum = 0;
	for(int i=1;i<=n;i++){
		if(i%2==1){
			sum+=i;
		}
	}
	printf("%d\n",sum);
	return 0;
}