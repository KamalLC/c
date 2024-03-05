//22fall6b

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	char name[50];
	int marks;
};

void main(){
	struct student s[100];
	int n, i;
	char a[1000];
	FILE *ptr;
	ptr = fopen("test.txt", "w");
	
	if(ptr == NULL){
		printf("Unable to open file.");
		exit(0);
	}
	printf("Enter string to store: ");
	gets(a);
	
	fputs(a, ptr);//putw for integer
	
	fclose(ptr);
	
	
	getch();
}
