#include <stdio.h>

 int main(){
 	int n,a[100],c[100]={0},t,r=0;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 for(int i=1;i<=n;i++){
	 	t=a[i];
	 	int l=0;
	 	int b[100]={0};
	 	int sum=0;
	 	for(int j=2;j<t;j++){
	 		if(t%j==0){
	 			while(t%j==0){
	 				b[l++]=j;
	 				t/=j;
				 }
			 }
			
			 }
			  for(int k=0;k<l;k++){
			 	sum=sum+b[k];
		 }
		 c[r++]=sum;
	 }
	 int s=0;
	 for(int x=0;x<r;x++){
	 	s=s+c[x];
	 }
	 printf("%d\n",s);
	 return 0;
 }