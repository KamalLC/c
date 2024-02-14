// 2023 Spring 2b

#include<stdio.h>
#include<conio.h>

void main(){
	float wallh, wallw, walll;
	float bh, bw, bl;
	float vowall, vobricks;
	float cob; // cost of bricks
	float nob;// no of bricks
	float tcob; // total cost of bricks
	
	wallh = 7;
	wallw = 0.2;
	walll = 50;
	
	bh = 0.08;
	bw = 0.06;
	bl = 0.1;
	
	cob = 1.5;
	
	vowall = wallw * wallh * walll;
	printf("%f\n", vowall);
	
	vobricks = bh * bw * bl;
	printf("%f\n", vobricks);
	
	nob = vowall / vobricks;
	
	tcob = nob * cob /100;
	
	printf("The total labor cost = %f rupees", tcob);
	
	getch();
}
