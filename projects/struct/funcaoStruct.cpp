#include <stdio.h>

typedef struct{
	char nome[50];
	int idade;
	float nota;
}Aluno;

void mostrarAluno (Aluno a){
	printf("Nome: %s | Idade: %d | Nota: %.2f\n", a.nome, a.idade, a.nota);
}

int main() {
	Aluno turma[5];
	for (int i = 0; i < 5; i++){
	
	printf("Digite o nome do aluno %d: ", i);
	scanf("%s", turma[i].nome);
	printf("Digite a idade do aluno %d: ", i);
	scanf("%d", &turma[i].idade);
	printf("Digite a nota do aluno %d: ", i);
	scanf("%f", &turma[i].nota);
	}
	
	printf("\n=== Dados do Aluno ===\n");
	for (int i = 0; i < 5; i++) {
		mostrarAluno(turma[i]);
	}
	return 0;
}
