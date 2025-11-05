#include <stdio.h>

struct Aluno{
	char nome[50];
	int idade;
	float nota;
};

int main() {
	struct Aluno a1;
	printf("Digite o nome: ");
	scanf("%s", a1.nome);
	printf("Digte a idade: ");
	scanf("%d", &a1.idade);
	printf("Digite a nota: ");
	scanf("%f", &a1.nota);
	
	printf("\n--- Dados do Aluno ---\n");
	printf("Nome: %s\n", a1.nome);
	printf("Idade: %d\n", a1.idade);
	printf("Nota: %f\n", a1.nota);
	return 0;
}
