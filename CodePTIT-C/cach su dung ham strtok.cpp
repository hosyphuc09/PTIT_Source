#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
	char a[105];
	gets(a);
	char* token=strtok(a, " ");
	int k=0;
	while(token!=NULL) {
		k++;
		token=strtok(NULL, " ");
	}
	printf("%d\n",k);
	return 0;
}