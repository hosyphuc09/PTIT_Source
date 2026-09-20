#include <stdio.h>

int main(){
	int n,a[100];
	int b[100]={0};
	int c[100]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				b[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]>1&&c[i]==0){
			printf("%d ",a[i]);
		
	
	for(int j=i;j<n;j++){
		if(a[j]==a[i]) c[j]=1;
	}}}
	printf("\n");
	return 0;
}