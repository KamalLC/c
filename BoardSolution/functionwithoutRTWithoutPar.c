#include<stdio.h>
#include<conio.h>

//without rt and no parameter
void add(){
	int a, b, sum;
	printf("Enter a, b: ");
	scanf("%d%d", &a, &b);
	
	sum = a + b;
	
	printf("sum = %d", sum);
}


void main(){
	add();
	
	getch();
}
