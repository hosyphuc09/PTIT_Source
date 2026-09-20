#include <stdio.h>

int check(int n){
	while(n>0){
		int r=n%10;
		if(r!=0&&r!=1)
		return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n,k=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(check(i)){
			k++;
		}
	}
	printf("%d\n",k);
	return 0;
}