//understanding if else statement

#include<stdio.h>
#include<conio.h>

void main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num % 3 == 0){
		printf("The number even");
		
	}else{
		printf("The number is odd");
	}
	
	getch();
}
