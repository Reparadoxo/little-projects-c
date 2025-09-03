#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

	float numero1, numero2, resultado;
	
	char operacao;
	
	printf("Digite o primeiro n�mero do c�lculo: ");
	scanf("%f", &numero1);

	printf("Digite o segundo n�mero do c�lculo: ");
	scanf("%f", &numero2);
	
	fflush(stdin);
	printf("Digite o s�mbolo da sua opera��o (soma = +, subtra��o = -, divis�o = /, multiplica��o = *): ");
	scanf("%c", &operacao);
	
	if (operacao == '+') {
		resultado = numero1 + numero2;
	} else if (operacao == '-') {
		resultado = numero1 - numero2;
	} else if (operacao == '*') {
		resultado = numero1 * numero2;
	} else if (operacao == '/' and numero2 != 0) {
		resultado = numero1 / numero2;
	} else if (operacao == '/' and numero2 == 0){
		printf("O divisor n�o pode ser 0 !");
	} else {
		printf("O s�mbolo n�o foi identificado !\n");
		return 0;
	}
	
	printf("O resultado de %.2f e %.2f com a opera��o %c � igual a %.2f", numero1, numero2, operacao, resultado);
	
	return 0;
}
