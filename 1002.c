#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double p, raio, area;

	p = 3.14159;
	
	scanf("%lf", &raio);
	
	//(pow) - Função para calcular potência.
	area = p * pow(raio,2);
	
	printf("A=%.4lf\n", area);
	
	return 0;
}
