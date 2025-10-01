#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	//There are some examples of strings array
	
	char palavra[6] = {'O', 'l', 'a', '\0'};
	//In this case '\0' marks the end of the array
	printf("Palavra: %s\n", palavra);
	
	char palavra1[] = "Ola_Mundo";
	//In this other example, there can be just the word between "", but it can't be more than one phrase
	printf("Palavra: %s\n", palavra1);
	
	//Another example, now you can input a name and receive it as a string
	char nome[20];
	scanf("%s ", nome);
	printf("Nome: %s\n", nome);
	
	// In my opinion the best method, stdin can input words with espace as long the characters are lesser than the limit of the array
	char nome1[20];
	fgets(nome1,40,stdin);
	printf("Nome: %s", nome1);
	
	return 0;	
}

