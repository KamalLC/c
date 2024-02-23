#include<stdio.h>
#include<math.h>

void main(){
	int num, i, sum = 0, digit, rem, x, y;
	
	for(i = 150; i < 500; i++){
		
		x = i;
		y = i;
		sum = 0;
		digit = 0;
		//to count digit in a number
		
		while(y != 0){
			y = y /10;
			digit++;
		}
		
		while(x != 0){
			rem = x % 10;
			sum += pow(rem, digit);
			x = x / 10;
		}
		if(i == sum){
			printf("\n%d", i);
		}
	}
	
	getch();
}
