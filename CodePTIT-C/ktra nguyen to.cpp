#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a[20][20],n,m;
	scanf("%d %d", &n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				
			
		
		if(nt(a[i][j])){
			a[i][j]=1;
		}else{
		a[i][j]=0;
		}}
	}
	for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",a[i][j]);}
				printf("\n");}
	return 0;
}