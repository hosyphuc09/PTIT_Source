#include <stdio.h>

int main(){
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		int s=0;
		int t=a[i];
		for(int j=2;j*j<=t;j++){
			while(t%j==0){
				s=s+j;
				t/=j;
			}
		}
		if(t>1){
			s+=t;
		}
		sum+=s;
	}
	printf("%d\n",sum);
	return 0;
}