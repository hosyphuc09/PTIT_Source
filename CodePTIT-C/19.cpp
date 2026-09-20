#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a=0,b=0,x;
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			if(x%2==0)
			a++;
			else
			b++;
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}