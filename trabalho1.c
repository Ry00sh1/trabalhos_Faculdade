#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float base, exp, result;
	int i;
	
	printf("\nDigite o numero da base: ");
	scanf("%f", &base);
	printf("\nDigite o numero do expoente: ");
	scanf("%f", &exp);
	
	result = pow(base, exp);
	printf("\nO resultado da potencia eh = %f ", result);
	
	printf("\n");
	
	printf("%f", base);
	while(i < exp-1){
		printf(" * %f ", base);
		i++;
	}
	printf(" = %f", result);
	
	return 0;
	
}