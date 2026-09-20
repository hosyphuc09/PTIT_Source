#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char a[100];
     fgets(a,20,stdin);
  a[strlen(a)-1]='\0';
	printf("%d",strlen(a));} 