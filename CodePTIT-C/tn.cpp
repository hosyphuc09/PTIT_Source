#include <stdio.h>
#include <string.h>
#include <ctype.h>

int demTu(char s[]) {
    int count = 0;
    int inWord = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace(s[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    int t;
    char s[201];
    scanf("%d", &t);
    getchar(); // Đọc bỏ ký tự newline sau số test

    for (int i = 0; i < t; i++) {
        fgets(s, sizeof(s), stdin);
        // Xoá ký tự newline nếu có
        s[strcspn(s, "\n")] = '\0';
        printf("%d\n", demTu(s));
    }

    return 0;
}
