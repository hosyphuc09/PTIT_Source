#include <stdio.h>

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
int a[100000];
int f=0;
for(int i=1;i<=n;i+=2){
	a[f++]=i;
}
for(int i=2;i<=n;i+=2){
	a[f++]=i;
	
}
printf("%d\n",a[k-1]);
return 0;
}