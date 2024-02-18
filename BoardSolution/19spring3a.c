#include<stdio.h>

void main(){
	
	int i, j;
	char str[] = "PROGRAMMING";
	
	for(i = 0; i < 11; i++){
		for(j = 0; j < 11 - i; j++){
			printf("%c", str[j]);
		}
		printf("\n");
	}
}
