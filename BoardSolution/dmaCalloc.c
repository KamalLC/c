//Dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr;
	int n, i;
	
	printf("How many number?: ");
	scanf("%d", &n);
	
	//calloc
	ptr = (int *)calloc(n , sizeof(int));
	printf("Enter %d elements: ", n);
	for(i = 0; i < n; i++){
		scanf("%d", ptr+i);
	}
	
	printf("\nElements are:");
	for(i = 0; i < n; i++){
		printf("\n%d", *(ptr + i));
	}
	
	free(ptr);
	
	getch();
}
