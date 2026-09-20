#include <stdio.h>
int check(int n){
	int f=0;
	while(n>0){
		f+=n/2;
		n/=2;
		
	}
	return f;
}
int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	int r=check(n);
	if(r>=k){
		printf("Yes\n");
	}else {
		printf("No\n");
	}
	return 0;
}