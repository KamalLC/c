#include<stdio.h>
#include<conio.h>

void main(){
	int a = 4;
	float b = 3.14;
	
	void *ptr;
	
	ptr = &a;
	printf("\nvalue of a = %d", *(int *)ptr);
	
	
	ptr = &b;
	printf("\nvalue of b = %f", *(float *)ptr);
	
	getch();
}
