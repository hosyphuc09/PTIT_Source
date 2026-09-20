#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, dem=0;
		scanf("%d", &n);
		int r=(int)sqrt(n);
		for(int i=1; i<=r; i++){
			if(n%i==0 ){
				if(i%2==0)
				++dem;
				if((n/i)%2==0 && i!=n/i) ++dem;
			}
		}
		printf("%d\n", dem);
		}
		
		return 0;
	}
