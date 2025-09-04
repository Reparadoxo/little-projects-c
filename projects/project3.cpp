#include <stdio.h>

int main() {

	int numeroBase, numeroMax, expoente, i;
	
	printf("Qual o número da base?\n");
	scanf("%d", &numeroBase);
	printf("Qual o número da potência máxima?\n");
	scanf("%d", &numeroMax);
	//input: A base number and a maximum number to iterate in the power of that number
	expoente = numeroBase;
	
	for(i = 1; i <= numeroMax; i++) {
		// The variable "i" here is used just to repeat the power process and is not directly relationed to the operation
		numeroBase = numeroBase * expoente;
		printf("\n%d", numeroBase);
	}
	//output: The power of the chosed base time the maximum number 
	return 0;
}

