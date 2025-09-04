#include <stdio.h>

int main() {
	
	int numeroBase, numeroMax, expoente, i;
	
	printf("Qual o número da base?\n");
	scanf("%d", &numeroBase);
	printf("Qual o número da potência máxima?\n");
	scanf("%d", &numeroMax);
	
	expoente = numeroBase;
	
	for(i = 1; i <= numeroMax; i++) {
		numeroBase = numeroBase * expoente;
		printf("\n%d", numeroBase);
	}
	return 0;
}
