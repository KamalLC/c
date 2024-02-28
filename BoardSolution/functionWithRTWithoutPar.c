#include<stdio.h>
#include<conio.h>

//with return type and without parameter
int add(){
	int a, b;
	printf("enter a, b: ");
	scanf("%d%d", &a, &b);
	
	return a + b;
}

void main(){
	int x = add();
	printf("sum = %d", x);
	
	getch();
}
