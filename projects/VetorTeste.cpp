#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	//Adiciona o valor de várias posições diretamente
	int v[10] = {5, 7, 9, 54, 5};
	
	//Leitura do vetor
	for (int i = 5; i < 10; i++) {
		printf("Digite um valor da posição %d: ", i);
		//Usar a variável de controle "i"
		scanf("%d", &v[i]);
	}
	
	//Impressão de um vetor
	for (int i = 0; i < 10; i++){
		//Não vai o &
		printf("%d ", v[i]);
	}
	//Outra maneira de atribuir um valor individual
	v[2] = 87;
	printf("%d ", v[2]);
	return 0;
}
