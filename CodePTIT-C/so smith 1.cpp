#include <stdio.h>
#include <math.h>

int pp(int n){
	int tong=0;
	while(n>0){
		tong += n%10;
		n /= 10;
	}
	return tong;
}

int check(int n){
	int sum=0;
	for(int i=2; i <= sqrt(n); i++){
		while(n % i == 0){
			sum += pp(i);  // cộng tổng chữ số của thừa số
			n /= i;
		}
	}
	if(n > 1){
		sum += pp(n); // nếu còn thừa số nguyên tố lớn hơn sqrt(n)
	}
	return sum;
}

int nt(int n){
	if(n < 2) return 0;
	for(int i=2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	if(nt(n)){
		printf("NO\n");
		return 0;
	}
	if(check(n) == pp(n)){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
