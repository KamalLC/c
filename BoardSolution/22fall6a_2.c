//22fall6a_2
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct date{
	int dd;
	int mm;
	int yy;
};

struct employee{
	char Name[50];
	char Address[50];
	float salary;
	long long int telephone; //long int will work as well
	struct date yoj;
};

void main(){
	struct employee e[50];
	int n = 50, i;
	char add[] = "POKHARA";
	for(i = 0; i < n; i++){
		printf("Enter name of employee %d: ", i+1);
		scanf("%s", &e[i].Name);
		
		printf("Enter address of employee %d: ", i+1);
		scanf("%s", &e[i].Address);
		
		printf("Enter Telephone number of employee %d: ", i + 1);
		scanf("%lld", &e[i].telephone);
		
		printf("Enter salary of employee %d: ", i + 1);
		scanf("%f", &e[i].salary);
		
		printf("Enter year of joining in mm dd yy format of employee %d: ", i+1);
		scanf("%d%d%d", &e[i].yoj.mm, &e[i].yoj.dd, &e[i].yoj.yy);
		
		printf("\n");
	}
	
	printf("Emp Name\tAddress\tTelephone\tSalary\tYear of Joining\n");
	for(i = 0; i < n; i++){
		strlwr(e[i].Address);
		if(strcmp(e[i].Address, "pokhara") == 0){
			printf("%s\t%s\t%lld\t%f\t%d/%d/%d\n", e[i].Name, e[i].Address, e[i].telephone, e[i].salary, e[i].yoj.mm, e[i].yoj.dd, e[i].yoj.yy);
		}
	}
	
	getch();
}
