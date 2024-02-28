//2013fall

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char str[6], ch, temp;
	int ind, i;
	
	printf("Enter a string: ");
	gets(str);
	
	printf("Enter a character to insert: ");
	scanf("%c", &ch);
	
	printf("Enter the index: ");
	scanf("%d", &ind);
	
	for(i = strlen(str); i > ind; i--){
		str[i] = str[i-1];
	}
	
	str[ind] = ch;
	
	printf("Updated string is: ");
	puts(str);
	
	getch();
}
