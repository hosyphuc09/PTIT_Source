#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char a[1001][1002];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int min =0;
	for(int i=1;i<n;i++){
		if(strlen(a[i])<strlen(a[min])||strlen(a[i]) == strlen(a[min]) && strcmp(a[i],a[min])<0){
			min=i;
			
		}
	}
	printf("%s\n",a[min]);
	return 0;
}