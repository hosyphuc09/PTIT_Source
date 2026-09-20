#include <stdio.h>

// Đếm số lần số 2 xuất hiện trong phân tích thừa số nguyên tố của n!
int count2InFactorial(int n) {
	int count = 0;
	for (int i = 2; i <= n; i *= 2) {
		count += n / i;
	}
	return count;
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	if (count2InFactorial(n) >= k) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
