//  sum of column

#include<stdio.h>
#include<conio.h>


void main(){
	int m=3, n =4;
	int arr[m][n], i, j, sum =0;
	
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
	
	//adding the elements of  each column separately
	for(i = 0; i < n; i++){
		sum = 0;
		for(j = 0; j < m; j++){
			sum += arr[j][i];
		}
		printf("\nSum of column %d= %d", i+1, sum);
	}
	
	
	
	getch();
}
