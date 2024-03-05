#include<stdio.h>
#include<conio.h>

void main(){
	int a, *ptr;
	printf("Enter your age : ");
	scanf("%d", &a);
	
	printf("a = %d", a);
	ptr = &a;
	printf("address of a = %d", ptr);	
	
	getch();
}
