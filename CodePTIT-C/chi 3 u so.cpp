#include <stdio.h>
#include <math.h>

int is_prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        int count = 0;
        int max_p = sqrt(b);

        for(int p = 2; p <= max_p; p++){
            if(is_prime(p)){
                long long square = 1LL * p * p;
                if(square >= a && square <= b){
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }
    return 0;
}