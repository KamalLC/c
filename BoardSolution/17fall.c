#include<stdio.h>
#include<conio.h>

void main(){
	int arr[5], i, num, flag = 0, ind;
	printf("Enter 5 elements in array: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the number to search in array: ");
	scanf("%d", &num);
	
	for(i = 0; i < 5; i++){
		if(arr[i] == num){
			flag = 1;
			ind = i;
			break;
		}
	}
	if(flag == 1){
		printf("Given number is present at index %d", ind);
	}else{
		printf("Given number is not present in the array.");
	}
	
	
	getch();
}
