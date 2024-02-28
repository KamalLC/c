//20fall4b
#include<stdio.h>

int matrixSum(){
	int m, n, i, j, sum = 0, arr[50][50];
	printf("enter no. of rows and columns: ");
	scanf("%d%d", &m, &n);
	
	printf("Enter all elements: ");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	//TODO: display matrix here
	
	for(i = 0 ; i < m; i++){
		for(j = 0; j < n; j++){
			sum += arr[i][j];
		}
	}
	
	return sum;
	
}

void main(){
	int a;
	a = matrixSum();
	printf("Sum of elements of matrix = %d", a);
	
	getch();
}
