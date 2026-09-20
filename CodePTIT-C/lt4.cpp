#include <stdio.h>

int min_cost(int n, int a, int b) {
   
    int cost_two = (b < 2 * a) ? b : 2 * a;
    
    // Số lượng cặp 2 hộp có thể mua
    int pairs = n / 2;
    // Số hộp lẻ còn lại
    int remainder = n % 2;
    
    return pairs * cost_two + remainder * a;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        
        printf("%d\n", min_cost(n, a, b));
    }
    
    return 0;
}