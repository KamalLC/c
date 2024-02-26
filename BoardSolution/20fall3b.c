#include<stdio.h>
#include<string.h>

int main(){
	char a[50], b[50];
	printf("Enter a string: ");
//	scanf("%s", a);
	gets(a);
	puts(a);
	
	strcpy(b, a);
	strrev(a);
	
	if(strcmp(a, b) == 0){
		printf("\nGiven string is palindrome.");
	}else{
		printf("\nGiven string is not palindrome.");
	}
	
	return 0;
}
