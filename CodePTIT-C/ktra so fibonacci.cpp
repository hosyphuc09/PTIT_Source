#include <stdio.h>

int check( int n){
	if(n==0||n==1) {
	return 1;}
	int a=1;
	int b=1;
	while(b<n){
		int t=b;
		b=a+b;
		a=t;
	}
	return (b==n);
	}
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--){
		
		int n;
		scanf("%d", &n);
		if(check(n))
		{
			printf("YES\n");
		}else
		{
			printf("NO\n");
		}}
		return 0;
	}