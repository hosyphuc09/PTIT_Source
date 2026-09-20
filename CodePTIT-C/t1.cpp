#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum = 0;

    while (n--) {
        int x;
        scanf("%d", &x);
        for (int j = 2; j * j <= x; j++) {
            while (x % j == 0) {
                sum += j;
                x /= j;
            }
        }
        if (x > 1) sum += x;
    }

    printf("%lld\n", sum);
    return 0;
}
