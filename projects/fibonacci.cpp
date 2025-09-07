#include <stdio.h>

int main() {

	long long int anterior, atual, proximo, i;
	
	anterior = 1;
	
	atual = 1;
	
	for(i = 1; i <= 20; i++) {
		proximo = anterior + atual;
		printf("A %lld sequência tem o seu valor anterior %lld e o atual %lld somam %lld\n", i, anterior, atual, proximo);
		anterior = atual;
		atual = proximo;
	}
	
}
