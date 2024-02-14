

#include<conio.h>
#include<stdio.h>

void main(){
	int sum = 0;
	int i;
	for(i = 20; i < 50; i++){
		if(i % 2 != 0){
			sum += i;
		}
	}
	
	printf("sum of odd numbers from 20 to 50 = %d", sum);
	
	getch();
}
