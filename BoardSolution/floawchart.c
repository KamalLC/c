//2022 fall 2b switch case or menu base program 


#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, a, b,c, result;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>= b && a>= c){
		printf("%d if greater", a);
	}else if(b>= c && b>= a){
		printf("%d if greater", b);
	}else{
		printf("%d is greater", c);
	}
	return 0;
}
