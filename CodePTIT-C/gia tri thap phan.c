#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n>0 && n<=999999999){
		
		printf("%.15f\n", (double)1/n);}
		else{
			printf("khong co gia tri!\n");
		}
}
	return 0;
}