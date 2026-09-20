#include <stdio.h>

void prime_factors(int n) {
    
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n = n / 2;
    }
    if (count > 0) {
        printf("2 %d\n", count);
    }

  
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count > 0) {
            printf("%d %d\n", i, count);
        }
    }

   n
    if (n > 1) {
        printf("%d 1\n", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    prime_factors(n);
    return 0;
}