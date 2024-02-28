//18fall5b

#include<stdio.h>

int sum(int n){
	if(n == 0){
		return 0;
	}
	
	return (n + sum(n - 1));
}

void main(){
	int n, result;
	printf("how many numbers?: ");
	scanf("%d", &n);
	
	result = sum(n);
	printf("Sum of natural numbers upto %d = %d", n, result);
	
	getch();
}
