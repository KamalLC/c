//23 spring 3 b

#include<stdio.h>
#include<conio.h>


void main(){
	int arr[4][4], i, j, sum = 0;
	
	printf("Enter all elements of matrix:\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	//displaying matrix
	printf("\nGiven matrix is: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	//adding all elements of matrix
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			sum = sum + arr[i][j];
			printf("\n%d", sum);
		}
	}
	
	printf("\nSum of all elements in given matrix is: %d", sum);
	
	
	getch();
}
