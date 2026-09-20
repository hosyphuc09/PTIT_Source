#include <stdio.h>

int main(){
	int n,a[100],b[100]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				b[i]=1;
				break;
			}
		}
	}
	int k[100]={0};
	int l=0;
	for(int i=0;i<n;i++){
		if(b[i]){
		
		int f=0;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				f=1;
				break;
			}
		}
	

if(!f){
	k[l++]=a[i];
}
}}
printf("%d\n",l);
for(int i=0;i<l;i++){
	printf("%d ",k[i]);
}
return 0;}