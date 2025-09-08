#include <stdio.h>

int main() {
	int numero, novoNumero, tabuadaAux = 1;
	
	printf("Digite um número para fazer sua tabuada.");
	scanf("%d", &numero);
	
	while (tabuadaAux < 11) {
		novoNumero = numero * tabuadaAux;
		printf("%d\n", novoNumero);
		tabuadaAux++;
	}
	return 0;
	
}
