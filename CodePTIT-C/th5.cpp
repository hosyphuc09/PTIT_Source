#include <stdio.h>

void print_U(int n) {
    for (int i = 1; i < n; i++) {
        printf("*");
        for (int j = 1; j <= n - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // Dòng cuối: in đủ n dấu *
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 5 || N > 100) {
        printf("N phai nam trong khoang 5 <= N <= 100\n");
        return 1;
    }

    print_U(N);
    return 0;
}
