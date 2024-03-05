//21spring6b

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student{
	char name[50];
	int roll;
	float grade;
	char university[50];
};

void main(){
	struct student s[100];
	int n, i;
	FILE *ptr;
	ptr = fopen("student.txt", "w+");
	
	if(ptr == NULL){
		printf("Unable to open file.");
		exit(0);
	}
	
	printf("Enter no. of students: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Enter name of student %d: ", i + 1);
		scanf("%s", &s[i].name);
		
		printf("Enter roll no of student %d: ", i + 1);
		scanf("%d", &s[i].roll);
		
		printf("Enter grade of student %d: ", i + 1);
		scanf("%f", &s[i].grade);
		
		
		printf("Enter university of student %d: ", i + 1);
		scanf("%s", &s[i].university);
		
		printf("\n");
	}
	
	fwrite(s, sizeof(s), n, ptr);
	rewind(ptr);
	fread(s, sizeof(s), n, ptr);
	
	for(i = 0; i < n; i++){
		if(strcmp(s[i].university, "pokhara") == 0){
			printf("%s\t%d\t%f\t%s", s[i].name, s[i].roll, s[i].grade, s[i].university);
		}
	}
	
	fclose(ptr);
	
	getch();
}
