#include <stdio.h>
 
 int main(){
 	 int a[100],b[100],n;
 	 scanf("%d",&n);
 	 for(int i=0;i<n;i++){
 	 	scanf("%d",&a[i]);
	  }
	  for(int i=0;i<n;i++){
	  	int res=-1;
	  	
	  	for(int j=i+1;j<n;j++){
	  	if(a[j]>a[i]){
	  		res=j;
		  }}
		  printf("%d ",res);}
	  printf("\n");
	  return 0;
 }