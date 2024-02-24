//Addition of two 3*4 matrix by taking input from user
// 2023 spring 4 b

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int arr1[3][4], arr2[3][4], sum[3][4], m = 3, n = 4, i, j;
	
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
