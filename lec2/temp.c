#include<stdio.h>
#include<conio.h>

void main(){
	int x = 5, y = 3;
	
	label1:
		printf("\nx = %d, y = %d", x, y);
		x++;
		y++;
		
		if(x < 10){
			goto label1;
		}
		
		getch();
}
