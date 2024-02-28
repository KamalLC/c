#include<stdio.h>
#include<conio.h>

//with return type and with parameter
int add(int a, int b){
	int sum = a + b;
	
	return sum;
}

void main(){
	int x, y;
	
	int a = add(5, 6);
	printf("sum = %d", a);
	
	getch();
}
