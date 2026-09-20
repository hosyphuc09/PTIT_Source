#include <stdio.h>

int cnt[100005];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        scanf("%d %d", &u, &v);
        cnt[u]++;
        cnt[v]++;
    }

    for (int i = 1; i <= n; ++i) {
        if (cnt[i] == n - 1) {
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
    return 0;
}
