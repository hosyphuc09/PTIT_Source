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
	int t;
	scanf("%d", &t);
	int f=t;
	while(t--){
	
	int n,a[100];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Test %d:\n",f-t);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int l=a[i];
				a[i]= a[j];
				a[j]=l;
			}
		}
	}
	
	int dem[100]={0};
	for(int i=0;i<n;i++){
	if(nt(a[i])){
	if(!dem[i]){
		int k=1;
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				dem[j]=1;
				k++;
			}
		}
		printf("%d xuat hien %d lan\n",a[i],k);
	}
	}}}
	return 0;
}