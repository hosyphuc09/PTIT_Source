#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_NUMBERS 10000000
#define MAX_LENGTH 9

int main() {
    int num;
    int max_val = 0;
    int min_val = INT_MAX;
    
    while (scanf("%d", &num) != EOF) {
        if (num > max_val) max_val = num;
        if (num < min_val) min_val = num;
    }
    
    printf("%d %d\n", max_val, min_val);
    return 0;
}
