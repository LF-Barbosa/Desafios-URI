#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int N, H;
	double V, SALARY;
	
	scanf("%d %d %lf", &N, &H, &V);
	
	SALARY = H * V;
	
	printf("NUMBER = %d\n", N);
	printf("SALARY = U$ %.2lf\n", SALARY);
	
return 0;
}
