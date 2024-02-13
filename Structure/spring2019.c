
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct Dob{
	int yy;
	int mm;
	int dd;
};

struct Employee{
	int emp_id;
	char emp_name[20];
	char addr[20];
	char department[20];
	struct Dob d1;
};

void main(){
	struct Employee e[100];
	int i;
	
	//taking input
	for(i = 0; i < 100; i++){
		printf("Enter id, name, address, department of the employee: ");
		scanf("%d%s%s%s", &e[i].emp_id, e[i].emp_name, e[i].addr, e[i].department);
		printf("Enter the date of birth: ");
		scanf("%d%d%d", &e[i].d1.yy, &e[i].d1.mm, &e[i].d1.dd);
	}
	
	printf("Information of employee of sales department: \n");
	
	for(i = 0; i < 100; i++){
		if(strcmp(e[i].department, "sales") == 0){
			printf("\nid = %d, name = %s, address = %s, department = %s, dob = %d/%d/%d", e[i].emp_id, e[i].emp_name, e[i].addr, e[i].department, e[i].d1.yy, e[i].d1.mm, e[i].d1.dd);
		}
	}
	
	
	getch();
}
