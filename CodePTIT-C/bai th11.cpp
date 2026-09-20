#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	
	int n;
	scanf("%d",&n);
	if(n<2020){
		printf("NO\n");
	}else{
		int j;
		for(int i=1;n>2019;i++){
			n-=2020;
			j=i;
		}
		if(n<=j) {
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	}
	return 0;
}