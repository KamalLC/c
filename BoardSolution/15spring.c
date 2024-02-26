//taking M*n order matrix from user and displaying the matrix

#include<stdio.h>
#include<math.h>

void main(){
	int arr[3][4], i, j, m = 3, n = 4, minimum, maximum;
	
	
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
	minimum = arr[0][0];
	maximum = arr[0][0];
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(arr[i][j] < minimum){
				minimum = arr[i][j];
			}
			
			if(arr[i][j] > maximum){
				maximum = arr[i][j];
			}
		}
	}
	
	printf("\nminimum = %d, maximum = %d", minimum, maximum);
	
	
	
	getch();
}
