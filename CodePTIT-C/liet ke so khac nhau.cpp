#include <stdio.h>

int main(){
	int n,a[100];
	scanf("%d",&n);
	for( int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[100];
	int k=0;
	for(int i=0;i<n;i++){
		int f=0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				f=1;
			
			}
		}
	
		if(!f){
		b[k++]=a[i];	
		}
	}
	for (int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(b[i]>b[j]){
				int t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
		}
	}
	for(int i=0;i<k;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}