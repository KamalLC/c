//  multiplication of matrix

#include<stdio.h>
#include<conio.h>


void main(){
	int m1=2, n1 =2;
	int m2 = 2, n2 = 2;
	
	int arr1[m1][n1], arr2[m2][n2], arr3[m1][n2], i, j, k, sum = 0;
	
	printf("\nEneter all the elements of first matrix: \n");
	for(i = 0; i < m1; i++){
		for(j = 0; j < n1; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("\nEneter all the elements of second matrix: \n");
	for(i = 0; i < m2; i++){
		for(j = 0; j < n2; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	
	//displaying the matrix
	printf("\nFirst matrix is: \n");
	for(i = 0; i < m1; i++){
		for(j = 0; j < n1; j++){
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSecond matrix is: \n");
	for(i = 0; i < m2; i++){
		for(j = 0; j < n2; j++){
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
	
	//multiplying two matrix
	for(i = 0; i < m1; i++){
		for(j = 0; j < n2; j++){
			sum = 0;
			for(k = 0; k < n1; k++){
				sum += (arr1[i][k] * arr2[k][j]);
			}
			arr3[i][j] = sum;
		}
	}
	
	//displaying the multiplied matrix
	printf("\nMultiplied matrix is: \n");
	for(i = 0; i < m1; i++){
		for(j = 0; j < n2; j++){
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
}
