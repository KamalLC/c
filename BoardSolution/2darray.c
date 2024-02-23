//fibonacci series upto 8 terms

#include<stdio.h>
#include<math.h>

void main(){
	int i, j;
	int arr[2][2] = {{1, 2}, {30, 14}};
	
	for(i = 0 ; i< 2; i++){
		for(j = 0; j<2; j++){
			printf("%d\t", arr[i][j]);//1	2	3	4
		}
		printf("\n");
	}
	
	getch();
}
