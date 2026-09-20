#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a[100],l=0;
		scanf("%d",&n);
		for(int i=2;i<=n;i++){
			int k=0;
			if(n%i==0){
			
			while(n%i==0){
			
				n/=i;
			
			a[l++]=i;
		}}}
		
		int tich = 1;
		int sum =0;
		for(int i=0;i<l;i++){
		
			sum=sum+a[i];}
		printf("%d\n",sum);
	}
	return 0;
}