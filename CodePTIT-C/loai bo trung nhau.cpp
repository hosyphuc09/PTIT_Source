#include <stdio.h>

int main(){
	int n,a[100],l[100],k=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
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
for(int j=0;j<k;j++){

printf("%d ",l[j]);}

printf("\n");
return 0;}