#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 
 int pangram(char a[]){
 	int c[26]={0};
 	for(int i=0;i<strlen(a);i++){
 		c[a[i]-'a']=1;
	 }
	 for(int i=0;i<26;i++){
	 	if(c[i]==0) return 0;
	 }
	 return 1;
 }
 int main(){
 	char a[1000];
 	gets(a);
 	if(pangram(a)){
 		printf("YES\n");
	 }else{
	 	printf("NO\n");
	 }
	 return 0;
 }