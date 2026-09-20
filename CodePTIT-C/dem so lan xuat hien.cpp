#include <stdio.h>

int main(){
	int n,a[100];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem[100]={0};
	for(int i=0;i<n;i++){
		if(!dem[i]){
		int k=1;
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				dem[j]=1;
				k++;
			}}
			printf("%d %d\n",a[i],k);
		}
	}
	
		
		return 0;
	}
	
