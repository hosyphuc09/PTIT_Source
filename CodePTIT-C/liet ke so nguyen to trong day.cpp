#include <stdio.h>
#include <math.h>
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=(int)sqrt(n); i++){
	if(n%i==0){
	
	return 0;}}
	return 1;
}
int main(){
	int a[100],n,dem=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		if(check(a[i])){
			++dem;}}
			printf("%d ",dem);
	for(int i=0;i<n;i++){
		if(check(a[i])){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	return 0;}
	