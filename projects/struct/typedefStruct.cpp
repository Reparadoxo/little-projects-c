#include <stdio.h>

typedef struct{
	char nome[50];
	int idade;
	float nota;
} Aluno;

int main() {
	Aluno a1, turma[10];
	printf("Digite o nome: ");
	scanf("%s", a1.nome);
	printf("Digte a idade: ");
	scanf("%d", &a1.idade);
	printf("Digite a nota: ");
	scanf("%f", &a1.nota);
	return 0;
}
