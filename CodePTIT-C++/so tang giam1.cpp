#include <iostream>
using namespace std;


bool nt(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}


bool check(int n) {
    int prev = n % 10;
    n /= 10;
    bool increasing = true, decreasing = true;

    while (n > 0) {
        int curr = n % 10;
        if (curr <= prev) increasing = false;
        if (curr >= prev) decreasing = false;
        prev = curr;
        n /= 10;
    }

    return increasing || decreasing;
}

int checkkk(int digits) {
    int count = 0;
    int start = 1;
    for (int i = 1; i < digits; ++i)
        start *= 10;
    int end = start * 10;

    for (int i = start; i < end; ++i) {
        if (check(i) && nt(i))
            ++count;
    }

    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int digits;
        cin >> digits;
        cout << checkkk(digits) << endl;
    }
    return 0;
}

