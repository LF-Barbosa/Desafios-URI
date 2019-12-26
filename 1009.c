#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char NOME;
	double TOTAL, COMISSAO, VV, VS;
	
	scanf("%s %lf %lf", &NOME, &VS, &VV);
	
	COMISSAO = ((VV * 15) / 100);
	
	TOTAL = COMISSAO + VS;
	
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	
return 0;
}
