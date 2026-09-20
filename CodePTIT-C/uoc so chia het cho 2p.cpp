#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,dem;
		scanf("%d", &n);
		for(int i=1; i<=n; i++){
			if(n%i==0 && i%2==0){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
	return 0;
}