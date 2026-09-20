#include <stdio.h>

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if(a==0 && b>=-1000 && b<=1000 && c>=-1000 && c<=1000){
		if(b!=0){
			printf("%.2f", -c/b);
		}else{
			printf("NO");
		}
	}else if(a!=0 && a>=-1000 && a<=1000 && b>=-1000 && b<=1000 && c>=-1000 && c<=1000){
	float denta = b*b - 4*a*c;
	if(denta == 0){
		printf("%.2f", -b/(2*a));
	}else if(denta > 0){
		float x1 = (-b+sqrt(denta))/(2*a);
		float x2 = (-b-sqrt(denta))/(2*a);
		printf("%.2f %.2f", x1, x2);
	}else{
		printf("NO");
	}	
	}else{
		printf("NO");
	}
	return 0;
	
}