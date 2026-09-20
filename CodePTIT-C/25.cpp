#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int min = INT_MAX; 
    int num;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num); 
        if (num < min) {
            min = num; 
        }
    }
    
    printf("%d", min); 
    return 0;
}