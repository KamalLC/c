#include<stdio.h>
#include<conio.h>

void multiply(int x, int b){
	
	printf("\nmult = %d", x * b);
}

void calculateSum(int x, int y){
	printf("\nsum = %d", x + y);
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main(){
	int a, b;
	printf("Enter a, b: ");
	scanf("%d%d", &a, &b);
	
	
//	calculateSum(a, b);
//	a = 10;
//	calculateSum(a, b);
	printf("before swapping: a = %d, b = %d", a, b);
	swap(&a, &b);
	printf("\nafter swapping: a = %d, b = %d", a, b);
	
	getch();
}


