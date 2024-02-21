#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
	int num, i = 2;
	
	printf("enter a number: ");
	scanf("%d", &num);
	
	if(num <= 1){
		printf("not a prime number. ");
		exit(0);
	}
	
	while(i != num){
		if(num % i == 0){
			printf("not a prime.");
			exit(0);
		}
		i++;
	}
	
	printf("Given number is a prime number.");
	
	
	getch();
}
