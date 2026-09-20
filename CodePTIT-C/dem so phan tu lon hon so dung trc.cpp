#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a[50],n,dem=1;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int f=a[0];
		for(int i=1;i<n;i++){
			if(a[i]>=f){
				++dem;
			
			f=a[i];}
		}
		printf("%d\n", dem);
	}
	return 0;
}