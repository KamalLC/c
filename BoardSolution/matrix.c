//taking M*n order matrix from user and displaying the matrix

#include<stdio.h>
#include<math.h>

void main(){
	int arr[100][100], i, j, m, n;
	
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	
	printf("\nEnter no. of column: ");
	scanf("%d", &n);
	
	printf("\nEnter all the elements of matrix: ");
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
//			printf("\nEnter element at a%d%d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	//displaying matrix
	printf("\nGiven matrix is\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	getch();
}
