#include <stdio.h>

int phuc(int a, int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
    int main(){
    	int t;
    	scanf("%d", &t);
    	while(t--){
    		int a, b;
    		scanf("%d %d", &a, &b);
    		printf("%d\n", phuc(a ,b));
    		
		}
		return 0;
	}

	

