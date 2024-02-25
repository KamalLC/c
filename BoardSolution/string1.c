#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char name[50];
	printf("Enter your name: ");
	scanf("%s", name);
	
	printf("\nHello %s", name);
	
	getch();
}
