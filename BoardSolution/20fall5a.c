//returning multiple values from function

#include<stdio.h>
#include<conio.h>

void findRemQuo(int a, int b, int *rem, int *quo){
	*rem = a%b;
	*quo = a/b;
}

void main(){
	int a = 10;
	int b = 3;
	int re, qu;
	int *r, *q;
	r = &re;
	q = &qu;
	
	findRemQuo(a, b, r, q);
	
	printf("\nRemainder = %d, Quotient = %d", *r, *q);
	
	getch();
}
