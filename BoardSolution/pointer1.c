#include<stdio.h>
#include<conio.h>

void main(){
	int a = 5;
	int *ptr;
	
	ptr = &a;
	
	printf("\nvalue of a = %d", *ptr);
		
	getch();
}
