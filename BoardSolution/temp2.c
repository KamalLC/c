//understanding while loop

#include<stdio.h>
#include<conio.h>

void main(){
	int i;
	int sum = 0;
	
//	while(i < 50){
//		if(i % 2 != 0){
//			sum = sum + i;
//		}
//			
//		i++;
//	}

	for(i = 20 ;i < 50; i++){
		if(i % 2 != 0){
			sum = sum + i;
		}		
	}
	
	printf("Sum of odd numbers from 20 to 50 = %d", sum);
	
	getch();
}
