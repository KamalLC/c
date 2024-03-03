#include<stdio.h>
#include<conio.h>

struct dob{
	int y, m, d;
};

struct person{
	char name[50];
	struct dob date;
};


void main(){
	struct person p[10]; 
	int i, n = 1;
	for(i = 0; i < n; i++){
		printf("Enter name: ");
		scanf("%s", &p[i].name);
	
		printf("Enter date of birth in dd, mm, yy: ");
		scanf("%d%d%d", &p[i].date.d, &p[i].date.m, &p[i].date.y);
	}
	
//	for(i = 0; i < n; i++){
//		printf("\nName = %s, dob = %d/%d/%d", p[i].name, p[i].date.d, p[i].date.m, p[i].date.y);
//	}
	if(p[0].date.m > 12){
		p[0].date.y++;
	}
	p[0].date.m = p[0].date.m % 12;
	printf("\nName = %s, dob = %d/%d/%d", p[0].name, p[0].date.d, p[0].date.m, p[0].date.y);
	
	getch();
}
