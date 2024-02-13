//understanding if statement

#include<stdio.h>
#include<conio.h>

void main(){
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age < 18){
		printf("You are not eligible to vote.");
	}
	
	getch();
}
