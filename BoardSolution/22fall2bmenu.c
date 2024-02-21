//2022 fall 2b switch case or menu base program 


#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, a, b,c, result;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("\nMenu\n1. sum\n2. Sumsquare\n3. mean\n4.  Exit");
	
	printf("\nChoose a number from menu: ");
	scanf("%d", &num);
	
	switch (num){
		case 1:
			result = a + b + c ;
			printf("Sum = %d", result);
			break;
		case 2:
			result = (a*a+b*b+c*c);
			printf("sum of squares = %d", result);
			break;
			
		case 3: 
			result = (a+b+c)/3;
			printf("mean of three numbers=%d", result);
		case 4:
			exit(0);
//			break;
		default:			
			printf("invalid selection");
	}
	
	
	return 0;
}
