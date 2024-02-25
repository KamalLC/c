//  20fall3a

#include<stdio.h>
#include<conio.h>


void main(){
	int m=3, n =4;
	int arr[3][3], i, j, sum =0;
	
	printf("Eneter all the elements of 3*4 matrix: \n");
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
	
	//adding the elements of  each row separately
	for(i = 0; i < m; i++){
		sum = 0;
		for(j = 0; j < n; j++){
			sum += arr[i][j];
		}
		printf("\nSum of row %d= %d", i+1, sum);
	}
	
	
	
	getch();
}
