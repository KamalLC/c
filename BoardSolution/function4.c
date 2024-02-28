#include<stdio.h>
#include<conio.h>

//with rt and no parameter
int add(){
	int a = 3;
	int b = 5;
	
	return a+b;
}

void main(){
	int x;
	x = add();	
	printf("sum =%d", x);
	
	getch();
}
