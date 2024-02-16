//solution of 2022 fall 2b  'or'

//using while loop

#include<stdio.h>
#include<conio.h>


void main(){
	int i = 20;
	int sum = 0;
	
	while(i < 50){
		if(i % 2 != 0){
			sum = sum + i;
		}
			
		i++;
	}
	
	printf("Sum of odd numbers from 20 to 50 = %d", sum);
	
	getch();
}
