#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double A, B, MEDIA, pesoA, pesoB;
	
	scanf("%lf %lf", &A, &B);
	
	pesoA = 3.5;
	
	pesoB = 7.5;
	
	MEDIA = ((A * pesoA) + (B * pesoB)) / (pesoA + pesoB);
	
	printf("MEDIA = %.5lf\n", MEDIA);
	
return 0;
}
