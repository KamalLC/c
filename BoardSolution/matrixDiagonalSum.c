//  Matrix Diagonal Sum

#include<stdio.h>
#include<conio.h>


void main(){
	int m = 3, n =3;
	int arr[3][3], i, j, sum =0;
	
	printf("Eneter all the elements of 3*3 matrix: \n");
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
	
	printf("\nSum of all odd elements: %d", sum);
	
	
	getch();
}
