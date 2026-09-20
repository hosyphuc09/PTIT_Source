#include <stdio.h>

int main(){

    float c;
    scanf("%f", &c);
    if(c<=100){
	printf("%.2f", (c*9/5)+32);
    }else{
	printf("khong co gia tri!");
    }
    return 0;
}