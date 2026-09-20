#include <stdio.h>

int check(int n){
	int p=n%10;
	while(n>0){
		int r=n%10;
		n/=10;
	}
	if(n==2*p || 2*n==p){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, a[100],k=0;
		scanf("%d",&n);
		while(n>0){
			int r=n%10;
			n/=10;
			a[k++]=r;
		}
		for(int i=1;i<n-1;i++){
			for(int j=n-2;j>=1;j--){
				if(a[i]==a[j]){
					if(check(n)){
						printf("YES\n");
					}else{
						printf("NO\n");
					}
				}
			}
		}
	}
	return 0;
}