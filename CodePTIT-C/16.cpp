#include <stdio.h>
#include <limits.h>

int main(){
	int n;
	if(scanf("%d",&n)!=1) return 0;
	int min = INT_MAX;
	int m;
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		if(m<min){
			min=m;
		}
	}
	printf("%d",min);
	return 0;
}
