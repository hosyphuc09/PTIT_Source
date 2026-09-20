#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	if(N<=1000){
		int nam = N/365;
		int tuan = (N%365)/7;
		int ngay = (N%365)%7;
		printf("%d %d %d", nam, tuan,ngay);
	}else{
		printf("khong co gia tri!");
	}
	return 0;
}