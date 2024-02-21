#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main(){
	int num[5], sum = 0;
	int i;
	
	printf("Enter 5 natural numbers: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &num[i]);
	}
	
	for(i = 0; i < 5; i++){
		sum = sum + num[i];
	}
	
	printf("Sum of given natural number = %d", sum);
	
	
	getch();
}
