#include <stdio.h>
/*Here's a new example of struct declaration. The vantage of this method is that you don't need to declare "struct" every time you declare a new instance of it.*/
typedef struct{
	char nome[50];
	int idade;
	float nota;
} Aluno;

int main() {
	/*Plus, this code associate an array to the instance so we can put multiple data in.*/
	Aluno a1, turma[10];
	printf("Digite o nome: ");
	scanf("%s", a1.nome);
	printf("Digte a idade: ");
	scanf("%d", &a1.idade);
	printf("Digite a nota: ");
	scanf("%f", &a1.nota);
	return 0;
}

