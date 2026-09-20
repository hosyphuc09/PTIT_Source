#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>0 && b>0 && a<1000 && b<1000){
		printf("%d %d %d %.2f %d", a+b, a-b, a*b, (double)a/b, a%b);
	} else if(a>0 && a<1000 && b==0){
		printf("0");
	}else{
		printf("khong co gia tri!");
	}
	
	return 0;
}