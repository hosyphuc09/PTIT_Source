#include <stdio.h>

int main(){
	int a[100],n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int r=a[i];
				a[i]=a[j];
				a[j]=r;
			}
		}
}
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
}
printf("\n");
return 0;
}