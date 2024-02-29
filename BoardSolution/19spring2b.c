//2019Spring2b
#include<stdio.h>
#include<conio.h>

int power(int X, int n){
	if(n == 0){
		return 1;
	}
	return X*power(X, n-1);
}

void main(){
	int x,  n, result;
	printf("Enter the value of x and n: ");
	scanf("%d%d", &x, &n);
	
	result = power(x, n);
	
	printf("\nvalue of %d^%d = %d", x, n, result);
	
	getch();
}
