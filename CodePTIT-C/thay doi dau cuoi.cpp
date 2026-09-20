#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int c=n%10, m=n, d, dem=0;
	while(n>=10){
		++dem;
		n/=10;
	}
	d=n;
	int giua= m-d*(int)pow(10,dem)-c;
	int kq= c*(int)pow(10,dem)+giua+d;
	printf("%d\n", kq);
	return 0;
}