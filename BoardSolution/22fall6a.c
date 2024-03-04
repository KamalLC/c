//22fall6a
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct date{
	int dd;
	int mm;
	int yyyy;
};

struct employee{
	int Emp_id;
	char Emp_name[50];
	char Department[50];
	char Address[50];
	struct date dob;
};

void main(){
	struct employee e[10];
	int n = 2, i;
	char add[] = "POKHARA";
	for(i = 0; i < n; i++){
		printf("Enter id of employee %d: ", i+1);
		scanf("%d", &e[i].Emp_id);
		
		printf("Enter name of employee %d: ", i+1);
		scanf("%s", &e[i].Emp_name);
		
		printf("Enter department of employee %d: ", i+1);
		scanf("%s", &e[i].Department);
		
		printf("Enter address of employee %d: ", i+1);
		scanf("%s", &e[i].Address);
		
		printf("Enter date of birth in dd mm yyyy format of employee %d: ", i+1);
		scanf("%d%d%d", &e[i].dob.dd, &e[i].dob.mm, &e[i].dob.yyyy);
		
		printf("\n");
	}
	
	printf("Emp Id\tEmp Name\tDepartment\tAddress\tDate of Birth\n");
	for(i = 0; i < n; i++){
		if(strcmp(e[i].Address, "POKHARA") == 0){
			printf("%d\t%s\t\t%s\t%s\t%d/%d/%d\n", e[i].Emp_id, e[i].Emp_name, e[i].Department, e[i].Address, e[i].dob.mm, e[i].dob.dd, e[i].dob.yyyy);
		}
	}
	
	getch();
}
