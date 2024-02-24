//Addition of two matrix by taking input from user

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int arr1[50][50], arr2[50][50], sum[50][50], m, n, i, j;
	
	printf("Enter no. of rows of matrix: ");
	scanf("%d", &m);
	
	printf("Enter no. of column of matrix: ");
	scanf("%d", &n);
	
	printf("\nEnter elements of first matrix: ");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("\nelement at a%d%d: ", i+1, j+1); // eg a11, a12, ...
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("\nEnter elements of second matrix: ");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("\nelement at b%d%d: ", i+1, j+1); //b11, b12,...
			scanf("%d", &arr2[i][j]);
		}
	}
	
	//displaying first matrix
	printf("\nFirst matrix is:\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
	
	//displaying second matrix
	printf("\nSecond matrix is:\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
	
	//Adding two matrix
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	//Displaying sum of matrix
	printf("\nThe sum of given matrix is: \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
}
