#include<stdio.h>
#include<conio.h>

struct dob{
	int y, m, d;
};

struct person{
	char name[5];
	int age;
};
union per{	
	char name[5];
	int age;
};


void main(){
	struct person p;
	union per u;
	printf("union = %d, structure =%d", sizeof(u), sizeof(p));
	getch();
}
