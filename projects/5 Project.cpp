#include <stdio.h>

int main() {
	int numero, novoNumero, tabuadaAux = 1;
	
	printf("Digite um número para fazer sua tabuada.");
	scanf("%d", &numero);
	//input: A positive number 
	//output: It's multiplication table until 10
	while (tabuadaAux <= 10) {
		novoNumero = numero * tabuadaAux;
		printf("%d\n", novoNumero);
		tabuadaAux++;
	}
	return 0;
	
}

