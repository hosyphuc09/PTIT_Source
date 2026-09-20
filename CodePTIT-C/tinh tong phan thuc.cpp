#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n%2==1){
			float s=0;
			for(int i=1;i<=n;i+=2){
				s=s+(float)1/i;
			}
			printf("%.6f\n",s);
		}
		if(n%2==0){
			float k=0;
			for( int i=2;i<=n;i+=2){
				k=k+(float)1/i;	
			}
			printf("%.6f\n",k);
		}
	}
	return 0;
}