#include <stdio.h>

int main() {
	
	int numeroBase, numeroMax, expoente, i;
	
	printf("Qual o n�mero da base?\n");
	scanf("%d", &numeroBase);
	printf("Qual o n�mero da pot�ncia m�xima?\n");
	scanf("%d", &numeroMax);
	
	expoente = numeroBase;
	
	for(i = 1; i <= numeroMax; i++) {
		numeroBase = numeroBase * expoente;
		printf("\n%d", numeroBase);
	}
	return 0;
}
