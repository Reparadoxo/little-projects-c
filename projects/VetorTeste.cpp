#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	//Adiciona o valor de v�rias posi��es diretamente
	int v[10] = {5, 7, 9, 54, 5};
	
	//Leitura do vetor
	for (int i = 5; i < 10; i++) {
		printf("Digite um valor da posi��o %d: ", i);
		//Usar a vari�vel de controle "i"
		scanf("%d", &v[i]);
	}
	
	//Impress�o de um vetor
	for (int i = 0; i < 10; i++){
		//N�o vai o &
		printf("%d ", v[i]);
	}
	//Outra maneira de atribuir um valor individual
	v[2] = 87;
	printf("%d ", v[2]);
	return 0;
}
