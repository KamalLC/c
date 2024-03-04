//23spring6a

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	char name[50];
	int rollno;
	char college[50];
};

void main(){
	struct student stu[10];
	int i, n = 10;
	char cn[] = "SoE"; 
	
	for(i = 0; i < n; i++){
		printf("Enter name of student %d: ", i+1);
		scanf("%s", &stu[i].name);
		
		printf("Enter roll no. of student %d: ", i+1);
		scanf("%d", &stu[i].rollno);
		
		printf("Enter name of college of student %d: ", i+1);
		scanf("%s", &stu[i].college);
	}
	
	printf("\nName\tRoll No. \tCollege\n");
	for(i = 0; i < n; i++){
		if(strcmp(stu[i].college, cn) == 0){
			printf("%s\t%d\t\t%s\n", stu[i].name, stu[i].rollno, stu[i].college);
		}
	}
	
	
	getch();
}
