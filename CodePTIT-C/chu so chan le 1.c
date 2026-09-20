#include <stdio.h>

int main(){
	int n, r, dem1=0, dem2=0; 
	scanf("%d", &n);
	while(n!=0){
		r=n%10;
		if(r%2==0){
			dem1++;
		}else
			dem2++;
		
		n/=10;}
	
	printf("%d %d\n", dem2, dem1);
	return 0;
}