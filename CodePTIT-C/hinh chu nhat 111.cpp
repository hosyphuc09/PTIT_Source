#include <stdio.h>

int main() {
    int n, m; 
    scanf("%d %d", &n, &m);

   
    if (n < 1 || n >= 9 || m < 1 || m >= 9) {
        printf("Invalid input\n");
        return 1; 
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            if (j < m - i) {
                k = j + 1 + i;
            } else {
                k = m - j;
            }
            printf("%d ", k); 
        }
        printf("\n");
    }

    return 0;
}