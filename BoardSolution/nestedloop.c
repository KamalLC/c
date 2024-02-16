#include<stdio.h>
#include<conio.h>

void main(){
	int i, j;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j <= i; j++){
			printf("%d\t", j+1);
		}
		printf("\n");
	}
	
	getch();
}
