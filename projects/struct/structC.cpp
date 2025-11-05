#include <stdio.h>
/*Here's an example of a 'Student' struct, it keeps name, age and grade*/
struct Aluno{
	char nome[50];
	int idade;
	float nota;
};

int main() {
	/*And here an instance of 'Aluno' called a1*/
	struct Aluno a1;
	printf("Digite o nome: ");
	scanf("%s", a1.nome);
	printf("Digte a idade: ");
	scanf("%d", &a1.idade);
	printf("Digite a nota: ");
	scanf("%f", &a1.nota);
	/*This is for print it's data*/
	printf("\n--- Dados do Aluno ---\n");
	printf("Nome: %s\n", a1.nome);
	printf("Idade: %d\n", a1.idade);
	printf("Nota: %f\n", a1.nota);
	return 0;
}

