//array as pointer
#include<stdio.h>

void main(){
	int arr[2][2]={{1, 2}, {3, 4}};
	int i, j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d\n", *(*(arr + i) + j));
		}
	}	
	
	
	
	getch();
}
