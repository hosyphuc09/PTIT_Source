#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 int check( char a[]){
 	for(int i=0;i<strlen(a);i++){
 		if(islower(a[i]))
 		{
 			return 0;
		 }
	 }
	 return 1;
 }
 int main(){
 	int t;
 	scanf("%d",&t);
 	getchar();
 	while(t--){
 		char a[1000];
 		fgets(a,sizeof(a),stdin);
 		char *token=strtok(a," ");
 		while(token!=NULL){
 			if(check(token)){
 				printf("%s ",token);
 				token=strtok(NULL," ");
 				
			 }
			 printf("\n");
		 }}
	 
	 return 0;
 }