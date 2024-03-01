// 10th term

#include<stdio.h>

int fibo(int num){
	if(num < 2){
		return num;
	}
	return (fibo(num -1) + fibo(num -2));
}

void main(){
	int i;
	printf("Fibonacci series upto 10th term: ");
//	for(i = 3; i < 13; i++){
//		printf("%d, ", fibo(i));
//	}

	printf("%d, ", fibo(45));
	
	
	getch();
}
