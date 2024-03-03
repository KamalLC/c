#include<stdio.h>
#include<conio.h>

struct person{
	char name[50];
	int age;
};


void main(){
	struct person p[10]; 
	int i, n = 3;
	for(i = 0; i < n; i++){
		printf("Enter name: ");
		scanf("%s", &p[i].name);
	
		printf("Enter age: ");
		scanf("%d", &p[i].age);
	}
	
	for(i = 0; i < n; i++){
		printf("\nName = %s, age = %d", p[i].name, p[i].age);
	}
	
//	printf("\nName = %s, age = %d", p[0].name, p[0].age);
	
	getch();
}
