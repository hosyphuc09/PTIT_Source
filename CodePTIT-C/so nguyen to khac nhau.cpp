#include <stdio.h>
#include <math.h>

int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		 return 0;}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,a[1000],l[1000],k=0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(check(a[i])){
			
			int f=0;
			for(int j=0;j<k;j++){
				if(a[i]==l[j]){
					f=1;
					break;
				}
			}
			if(!f){
				l[k++]=a[i];
			}
			}
		}
		for(int i=0;i<k-1;i++){
			for(int j=i+1;j<k;j++){
				if(l[i]>l[j]){
					int f=l[i];
					l[i]=l[j];
					l[j]=f;
				}
			}}
			for(int i=0;i<k;i++){
			
			printf("%d ", l[i]);
		}
		printf("\n");
	}
	return 0;}
		
		
		
		
		
		