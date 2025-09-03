#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Included the libraries to usa system commands, do some math expressions and get the portuguese characters
int main () {
	setlocale(LC_ALL, "Portuguese");

	float numero1, numero2, resultado;
	
	char operacao;
	
	printf("Digite o primeiro número do cálculo: ");
	scanf("%f", &numero1);

	printf("Digite o segundo número do cálculo: ");
	scanf("%f", &numero2);
	
	fflush(stdin);
	// Flush to clean the last keyboard key and not affect 
	printf("Digite o símbolo da sua operação (soma = +, subtração = -, divisão = /, multiplicação = *): ");
	scanf("%c", &operacao);

	// input: two numbers to make a calculation and the symbol to choose what operation

	// output: A calculation with the operation you chose before, except if you pick zero as the divisor (arithmetic reasons) or the symbol were not identified.
	
	if (operacao == '+') {
		resultado = numero1 + numero2;
	} else if (operacao == '-') {
		resultado = numero1 - numero2;
	} else if (operacao == '*') {
		resultado = numero1 * numero2;
	} else if (operacao == '/' and numero2 != 0) {
		resultado = numero1 / numero2;
	} else if (operacao == '/' and numero2 == 0){
		printf("O divisor não pode ser 0 !");
	} else {
		printf("O símbolo não foi identificado !\n");
		return 0;
	}
	
	printf("O resultado de %.2f e %.2f com a operação %c é igual a %.2f", numero1, numero2, operacao, resultado);
	
	return 0;
}

