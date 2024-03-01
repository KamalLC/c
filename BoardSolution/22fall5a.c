// 22fall 5a

#include<stdio.h>

// using iterative method
//int factorial(int n){
//	int sum = 1, i;
//	for(i = n; i > 0; i--){
//		sum = sum * i;
//	}
//	return sum;
//}


//using recursion
int factorial(int n){
	if(n == 0){
		return 1;
	}
	return n*factorial(n-1);
}


void main(){
	int num, result;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	result = factorial(num);
	
	printf("\nfactorial of %d = %d", num, result);
	
	
	getch();
}
