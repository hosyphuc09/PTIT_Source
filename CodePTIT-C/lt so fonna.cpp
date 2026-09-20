#include <stdio.h>

int check(int n){
if(n==0||n==1) return 1;
int a=1;
int b=1;
	while(b<n){
		int t=a+b;
		a=b;
		b=t;
		
	}
	return b==n;
}
int main(){
	int n;
	scanf("%d",&n);
	if(check(n)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}