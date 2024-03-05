//22fall6b

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student{
	char name[50];
	int marks;
};

void main(){
	struct student s[100];
	int n, i;
	FILE *ptr;
	ptr = fopen("a.txt", "w");
	
	if(ptr == NULL){
		printf("Unable to open file.");
		exit(0);
	}
	
	printf("Enter no. of students: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Enter name of student %d: ", i + 1);
		scanf("%s", &s[i].name);
		
		printf("Enter marks of student %d: ", i + 1);
		scanf("%d", &s[i].marks);
		
		printf("\n");
	}
	
	fwrite(s, sizeof(s), n, ptr);
	
	fclose(ptr);
	
	getch();
}
