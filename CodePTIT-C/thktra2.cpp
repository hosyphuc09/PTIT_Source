#include <stdio.h>
#define max 1000001
int b[max];
int main(){
	int n;
	scanf("%d",&n);
	int a, f=0,k=max;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		b[a]++;
		if(b[a]>f){
			f=b[a];
			k=a;
		}else if( b[a]== f && a<k){
			k=a;
		}
	}
	
	
			
		printf("%d",k);
	return 0;
}