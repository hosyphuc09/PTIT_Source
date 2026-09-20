#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a[100];
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int k=0;
		for(int i=0;i<n;i++){
			if(a[i]==a[i+1]){
				k++;
			}
		}
		printf("%d\n",k);	
	}
	return 0;
}