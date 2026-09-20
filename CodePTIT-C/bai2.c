#include <stdio.h>

int main(){

int N, T;
scanf("%d", &T);
for (int i=0; i < T; i++){
	scanf("%d", &N);
	if(N>=0 && N<=999999999){
	printf("%d\n", N*2);
}else{

printf("so khong hop le!\n");}
return 0;
}
}