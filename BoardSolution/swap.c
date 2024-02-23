//fibonacci series upto 8 terms

#include<stdio.h>
#include<math.h>

void main(){
	int a = 6, b = 5, temp;
	
	printf("Before swapping a = %d, b = %d", a, b);
	
	//swapping
	temp = a;
	a = b; 
	b = temp;	
	
	printf("\nAfter swapping a = %d, b = %d", a, b);
	
	getch();
}
