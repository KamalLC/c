//solution of 2022 fall 2b  'or'



#include<stdio.h>
#include<conio.h>

void main(){
	int i = 0, x = 0;
	
	for(i = 1; i < 10; i++){
		if(i % 2 == 0){
			x += i;
		}else{
			x--;
			printf("%d\t", x);
		}
	}
	
	printf("\nx = %d", ++x);
	
	getch();
}
