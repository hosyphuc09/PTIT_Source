#include <stdio.h>
int check(int n,int a[]){
	for(int i=0;i<n;i++){
			if(a[i]!=a[n-1-i]){return 0;}
			
			
			}
			return 1;}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a[100],n;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		if(check(n,a)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
		}
	
	return 0;
}