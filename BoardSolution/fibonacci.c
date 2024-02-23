//fibonacci series upto 8 terms

#include<stdio.h>
#include<math.h>

void main(){
	int a, b, i, sum = 0;
	a = 0;
	b = 1;
	
	printf("0, 1, ");
	for(i = 2; i < 8; i++){
		sum = a + b;
		a = b;
		b = sum;
		printf("%d, ", sum);
	}
	
	getch();
}
