#include <stdio.h>

void check_representation(int n) {
   
    int max_2020 = n / 2020;
    
   
    for (int k = 0; k <= max_2020; k++) {
        int remainder = n - 2020 * k;
        if (remainder >= 0 && remainder % 2021 == 0) {
            printf("YES\n");
            return;
        }
    }
    
    printf("NO\n");
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        check_representation(n);
    }
    
    return 0;
}