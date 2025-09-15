#include <stdio.h>
#include <locale.h>

int main() {
		// This code counts grains, started being placed in a chass board. The logic is to add in sum the double of the last zone, the final being 64 place.
	setlocale(LC_ALL, "Portuguese");
	int i;
	long long int atual, posterior, graos;
	// Note that "grãos" (grains) start with the integer 1. 
	graos = 1;
	// This variable "Atual" represents the current number of the current zone of the chass board.
	atual = 1;
	
	for (i = 1; i <= 64; i++) {
		// Here "Posterior" means the next value in the chass zone, plus i sum this value to "Grãos".
		posterior = atual * 2;
		graos += posterior;
		printf("A quantidade atual %llu e o seu dobro (posterior) %llu e se soma nos grãos %llu\n", atual, posterior, graos);
		// Finally, i attributed the next value to the "Atual" (Current) value.   
		atual = posterior;
	}
	return 0;
}
