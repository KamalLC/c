//  22fall4a

#include<stdio.h>
#include<conio.h>


void main(){
	int m, n;
	int arr[3][3], i, j, sum =0;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	
	printf("Eneter all the elements of m*n matrix: \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	//displaying the matrix
	printf("\nGiven matrix is: \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	//adding all the odd elements
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(i == j){// if secondary diagonal is needed: if(i == j && i + j == n -1){
				sum += arr[i][j];
			}
		}
	}
	
	printf("\nSum of diagonal elements: %d", sum);
	
	
	getch();
}
