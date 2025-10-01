#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char palavra[6] = {'O', 'l', 'a', '\0'};
	// O marcador \0 {caracter nulo} marca o fim da string
	printf("Palavra: %s\n", palavra);
	
	char palavra1[] = "Ola_Mundo";
	// Pode utilizar a palavra direta sem colocar o limite de char
	printf("Palavra: %s\n", palavra1);
	
	//Leitura do vetor char
	char nome[20];
	scanf("%s ", nome);
	printf("Nome: %s\n", nome);
	char nome1[20];
	
	// Entrada padrão stdin
	fgets(nome1,40,stdin);
	printf("Nome: %s", nome1);
	
	return 0;	
}
