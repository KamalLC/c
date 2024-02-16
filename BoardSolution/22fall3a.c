#include<stdio.h>
#include<conio.h>

void main(){
	int i = 1;

// using for loop
//	for(i = 1; i < 5; i++){
//		printf("%d,", i * i);
//	}

	//using do while loop
	
	do{
		printf("%d,", i * i);
		i++;
	}while(i < 5);
	
	getch();
}
