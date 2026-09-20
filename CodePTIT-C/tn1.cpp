#include <stdio.h>
#include <string.h>

int countWords(char *str) {
    int count = 0;
    char *token = strtok(str, " ");
    
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    
    return count;
}

int main() {
    int t;
    char str[201];

    // Nh?p s? b? test
    scanf("%d", &t);
    getchar(); 

    for (int i = 0; i < t; i++) {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        printf("%d\n", countWords(str));
    }

    return 0;
}