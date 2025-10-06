#include <stdio.h>
#include <string.h>

int main() {
	char nome[20] = "Lambarildo";
	char nome1[20] = "Peixe";
	char completo[40];
	strcpy(completo, nome); //Copia Lambarildo
	strcat(completo, " "); //Adiciona espaço
	strcat(completo, nome1); //Adiciona "Peixe"
	printf("Nome completo: %s", completo);
	
	return 0;
}
