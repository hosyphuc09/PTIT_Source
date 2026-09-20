#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		int k=0;
		while(n%i==0){
		k++;
			n/=i;
		}
		if(k>0){
		
		printf("%d %d\n",i,k);
	}}
	
	return 0;
}