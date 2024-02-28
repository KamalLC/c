#include<stdio.h>
#include<conio.h>

//with return type and with parameter
//int multiply(int x, int y){
//	return x * y;
//}


//with no return type and with parameter
void multiply1(int x, int y){
	int  z;
	z = x * y;
	printf("\nmult = %d", z);
}



int main(){
	int a, b, mult;
	printf("Enter a, b: ");
	scanf("%d%d", &a, &b);
	
//	mult = multiply(a, b); //return type
//	printf("Mulitplication result = %d", mult);
	
	multiply1(a, b); //no return type
	
	return 0;
}


