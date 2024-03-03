//19fall5a

#include<stdio.h>
#include<conio.h>

void addArr(int a[], int n){
	int i;
	
	for(i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
}

void main(){
	int arr[] = {1, 2, 3, 4, 5};
	
	addArr(arr, 5);

	getch();
}
