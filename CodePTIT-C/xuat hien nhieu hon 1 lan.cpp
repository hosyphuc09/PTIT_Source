#include <stdio.h>
int main(){


	int n,a[100];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem[100]={0};
	for(int i=0;i<n;i++){
	int k=0;
	for(int j=0;j<n;j++){
		if(a[j]==a[i]){
			k++;
		}
	}
	dem[i]=k;}
	int r[100];
	for(int i=0;i<n;i++){
		if(dem[i]>1){
		 r[i]=a[i];
		}
	}
	int f=0,p[100],e=0;
	for(int i=0;i<0;i++){
		for(int j=0;j<e;j++){
			if(r[i]==p[j]){
				f=1;break;
			}
		}
		if(!f){
			p[e++]=r[i];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	printf("\n");
	return 0;}