#include<stdio.h>

void main(){
	
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5 - i; j++){
			printf("%d\t", j + 1);
		}
		printf("\n");
	}
}
