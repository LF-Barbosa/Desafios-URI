#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double A, B, C, PA, PB, PC, MEDIA;
	
	PA = 2;
	PB = 3;
	PC = 5;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	MEDIA = ((A * PA) + (B * PB) + (C * PC)) / (PA + PB + PC);
	
	printf("MEDIA = %.1lf\n", MEDIA);
	
return 0;	
}
