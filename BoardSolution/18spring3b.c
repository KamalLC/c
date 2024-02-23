//fibonacci series upto 8 terms

#include<stdio.h>
#include<math.h>

void main(){
	int arr[100], i, j, temp, n;
	
	printf("Enter how many elements are there: ");
	scanf("%d", &n);
	
	printf("Enter all the elements: ");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	//sorting the element in array
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			if(arr[j] < arr[i]){
				//swap
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	//displaying array
	printf("\nSorted array: ");
	for(i = 0; i < n; i++){
		printf("%d, ", arr[i]);
	}
	
	getch();
}
