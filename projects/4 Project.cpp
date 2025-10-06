#include <stdio.h>

int main() {
	
	long long int anterior, atual, proximo, iteracoes, i;

	anterior = 1;
	atual = 1;

	printf("Digite o número de iterações para o fibonnaci: ");
	scanf("%lld", &iteracoes);
	//input: The number of sequences of the fibonacci
	//output: A fibonacci sequence, where the previous number adds to the next number
	for(i = 1; i <= iteracoes; i++) {
		proximo = anterior + atual;
		printf("A %lld sequência tem o seu valor anterior %lld e o atual %lld somam %lld\n", i, anterior, atual, proximo);
		anterior = atual;
		atual = proximo;
	}
	return 0;
}
