#include<stdio.h>
#include<string.h>

void main(){
	int x[10];
	int *ptr;
	ptr = x;
	printf("%d", ptr);
	ptr = &x[0];
	printf("\n%d", ptr);
	
	getch();
}
