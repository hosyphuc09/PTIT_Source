#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q); 

  
    int *A = (int*)malloc((N + 1) * sizeof(int));
    long long *prefix = (long long*)malloc((N + 1) * sizeof(long long));
    
    prefix[0] = 0; 
    
   
    for (int i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
        prefix[i] = prefix[i - 1] + A[i];
    }

    
    for (int q = 0; q < Q; q++) {
        int l, r;
        scanf("%d %d", &l, &r);
        
       
        printf("%lld\n", prefix[r] - prefix[l - 1]);
    }

   
    free(A);
    free(prefix);
    
    return 0;
}