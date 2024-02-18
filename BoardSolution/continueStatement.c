#include<stdio.h>

void main(){
	int i;
	for(i = 0; i < 10; i++){
		if(i == 5){
			continue;
		}
		printf("%d\n", i);
	}
	
	
	getch();
}
