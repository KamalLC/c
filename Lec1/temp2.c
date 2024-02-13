#include<stdio.h>
#include<string.h>

int main()
{
	int a, b,c, d;
	float divide;
	
	a = 7;
	b = 20;
	c = a & b;
	
	
	d = a>b?a:b;
	d = d>c?d:c;
	
	
	printf("d = %d\n", c);
	
	return 0;
}
