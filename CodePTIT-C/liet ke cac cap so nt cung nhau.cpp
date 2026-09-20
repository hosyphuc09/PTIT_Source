#include <stdio.h>

int nt(int m,int n){
	while(n!=0){
		int t=n;
		n=m%n;
		m=t;
	}
	return m;
}
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	for(int i=a;i<b;i++){
		for(int j=i+1;j<=b;j++){
			if(nt(i,j)==1){
				printf("(%d,%d)\n",i,j);
			}
		}
	}
	return 0;
}