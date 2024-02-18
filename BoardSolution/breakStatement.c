#include<stdio.h>

void main(){
	int i;
	for(i = 0; i < 10; i++){
		printf("%d\n", i);
		if(i == 5){
			break;
		}
	}
	
	
	getch();
}
