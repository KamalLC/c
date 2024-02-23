//23spring3a

#include<stdio.h>
#include<math.h>

void main(){
	int i, j, x, n;
	int sum = 0;
	printf("enter the value of x and n: ");
	scanf("%d%d", &x, &n);
	
	for(i = 0; i <= n; i++){
		sum+= pow(x,i);
	}
	
	printf("result = %d", sum);
	
	getch();
}
