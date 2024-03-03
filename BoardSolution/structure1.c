#include<stdio.h>
#include<conio.h>

struct person{
	char name[50];
	int age;
};


void main(){
	struct person p; //={"ram", 20} for compile time initialization
	printf("Enter name: ");
	scanf("%s", &p.name);
	
	printf("Enter age: ");
	scanf("%d", &p.age);
	
	printf("Enter name: ");
	scanf("%s", &q.name);
	
	printf("Enter age: ");
	scanf("%d", &q.age);
	
	printf("\nfirst person: name = %s, age = %d", p.name, p.age);
	printf("\nsecond person: name = %s, age = %d", q.name, q.age);
	
	getch();
}
