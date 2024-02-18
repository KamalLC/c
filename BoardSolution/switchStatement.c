#include<stdio.h>
#include<stdlib.h>

void main(){
	int num, a, b, result;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	printf("\nMenu\n1. Add\n2. Sub\n3. Exit");
	
	printf("\nChoose a number from menu: ");
	scanf("%d", &num);
	
	switch (num){
		case 1:
			result = a + b;
			printf("Sum = %d", result);
			break;
		case 2:
			result = a - b;
			printf("Difference = %d", result);
			break;
		case 3:
			exit(0);
//			break;
		default:			
			printf("invalid selection");
	}
	
	
	getch();
}
