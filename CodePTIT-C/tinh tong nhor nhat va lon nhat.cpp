#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		long long n=a,m=b;
		int c[100],d[100],k=0,l=0;
		while(a>0){
			c[k++]=a%10;
			a/=10;
		}
		
		while(b>0){
			d[l++]=b%10;
			b/=10;
		}
		for(int i=0;i<k;i++){
			if(c[i]==6){
				c[i]=5;
			}}
			for(int i=0;i<l;i++){
				if(d[i]==6){
					d[i]=5;
				}}
				int r=1;
				for(int i=k-1;i>=0;i--){
					 r=r*10+c[i];
				}
				int y=1;
				for(int i=l-1;i>=0;i--){
					y=y*10+d[i];
				}
				printf("%lld ",y+r);
				for(int i=0;i<k;i++){
					if(c[i]==5){
						c[i]=6;
					}
				}
				for(int i=0;i<l;i++){
					if(d[i]==5){
						d[i]==6;
					}
				}
				int q=1;
				for(int i=k-1;i>=0;i--){
					q=q*10+c[i];
				}
				int w=1;
				for(int i=l-1;i>=0;i--){
					w=w*10+d[i];
				}
				printf("%lld\n",w+q);
			}
			return 0;
		}
	



