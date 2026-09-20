#include <stdio.h>

int ucln(int a,int b){
	while(a!=0){
		int f=a;
		a=b%a;
		b=f;
	}
	return b;
}
int bcnn(int a,int b){
	return (a*b)/(ucln(a,b));
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int n=a;
	int m=b;
	while(a!=0){
		int f=a;
		a=b%a;
		b=f;
	}
	printf("%d ",b);
	printf("%d\n",(n*m)/b);
	return 0;
}





