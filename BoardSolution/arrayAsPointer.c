//array as pointer
#include<stdio.h>

void main(){
	int arr[]={1, 2, 3, 4, 5};
	int i;
	for(i = 0; i < 5; i++){
		printf("%d\n", *(arr + i));
	}	
	
	
	
	getch();
}
