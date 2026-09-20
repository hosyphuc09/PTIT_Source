#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	if(N>0 && N<=99999){
		if(N%2 == 0){
			printf("CHAN");
		}
			else{
				printf("LE");
			}
			
		}else{
			printf("khong co gia tri!");
		}
	
	return 0;
}