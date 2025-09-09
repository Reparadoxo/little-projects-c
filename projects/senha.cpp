#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int char1, char2, char3, char4;
	
	printf("Digite o primeiro caractér da senha: ");
	scanf("%d", &char1);

	printf("Digite o segundo caractér da senha: ");
	scanf("%d", &char2);
	
	printf("Digite o terceiro caractér da senha: ");
	scanf("%d", &char3);
	
	printf("Digite o quarto caractér da senha: ");
	scanf("%d", &char4);
	
	if (char1 == 1 and char2 == 2 and char3 == 3 and char4 == 4) {
		printf("Acesso Permitido.");
	} else {
		printf("Acesso Negado.");
	}
	
	return 0;
}
