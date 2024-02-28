#include<stdio.h>
#include<conio.h>

//without rt and with parameter
void add(int a, int b){	
	int sum = a + b;
	
	printf("sum = %d", sum);
}


void main(){
	add(5, 60);
	
	getch();
}
