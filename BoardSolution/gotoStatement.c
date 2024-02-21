#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main(){
	int n1, n2;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &n1, &n2);
	
	if(n1 < 0 || n2 < 0){
		
		goto negative;
	}
	printf("Both numbers are positive.");
	exit(0);
	
	negative:
		printf("Either number is negative.");
	
	getch();
}
