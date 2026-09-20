#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
	scanf("%lld",&n);
	int a[100],k=0;
	
	int v=1;
	while(n>0){
		int r=n%10;
		n/=10;
		if(r==0||r==1||r==8||r==9){
			if(r==1){
			a[k++]=1;
			
			}else{
				a[k++]=0;
			}
		}else{
			v=0;
			break;
		}
		}
		
		if(!v){
			printf("INVALID\n");
		}else{
			int i = k - 1;
            while (i >= 0 && a[i] == 0) i--;

            if (i < 0) {
                printf("INVALID\n"); // Tất cả là số 0
            } else {
                for (int j = i; j >= 0; j--) {
                    printf("%d", a[j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
	
			  
		