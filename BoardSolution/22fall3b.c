//22 fall 3 b

#include<stdio.h>
#include<conio.h>


void main(){
	int arr[40][40], i, j, m, n;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	
	printf("\nEnter all elements of matrix: \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	//diplaying matrix
	printf("\nGiven matrix is: \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	//displaying transpose matrix
	printf("\n\n\nThe transpose of given matrix is \n");
//	transpose (m*n) => n*m
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d\t", arr[j][i]);
		}
		printf("\n");
	}
	
	
	getch();
}
