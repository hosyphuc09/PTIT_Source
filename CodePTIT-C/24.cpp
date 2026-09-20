#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MOD 1000000007


long long power(long long x, long long y, long long p) {
    long long res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main() {
    int m;
    scanf("%d", &m);
    
  
    int *count = (int*)calloc(200001, sizeof(int));
    long long N = 1;
    
    for (int i = 0; i < m; i++) {
        int p;
        scanf("%d", &p);
        count[p]++;
        N = (N * p) % MOD;
    }
    
   
    long long d = 1;
    for (int i = 2; i <= 200000; i++) {
        if (count[i] > 0) {
            d = (d * (count[i] + 1)) % (MOD - 1); 
        }
    }
    
  
    long long result;
    if (d % 2 == 0) {
        result = power(N, d/2, MOD);
    } else {
        result = (power(N, d/2, MOD) * (long long)sqrt(N)) % MOD;
    }
    
    printf("%lld\n", result);
    free(count);
    return 0;
}