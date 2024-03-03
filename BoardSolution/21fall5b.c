//21fall5b

#include<stdio.h>
#include<conio.h>

void addArr(int *a, int n){
	int sum = 0;
	int i;
	
	for(i = 0; i < n; i++){
		sum += *(a + i);
	}
	printf("sum = %d", sum);
}

void main(){
	int arr[] = {1, 2, 3, 4, 5};
	
	addArr(arr, 5);
	
	getch();
}
