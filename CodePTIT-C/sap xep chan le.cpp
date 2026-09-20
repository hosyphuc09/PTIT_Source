#include <stdio.h>

int main(){
	int n,a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int r=0,t=0,b[100],c[100];
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			b[r++]=a[i];
		}
		if(a[i]%2==1){
		
			c[t++]=a[i];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=i+1;j<r;j++){
		
		if(b[i]>b[j]){
			int z=b[j];
			b[j]=b[i];
			b[i]=z;
		}}
	}
	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
		
		if(c[i]>c[j]){
			int l=c[j];
			c[j]=c[i];
			c[i]=l;
		}}}
	
	for(int i=0;i<r;i++){
		printf("%d ",b[i]);
	}
	for(int i=0;i<t;i++){
		printf("%d ",c[i]); 
	}
	printf("\n");
	return 0;
}





