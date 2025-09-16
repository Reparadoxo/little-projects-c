#include <stdio.h>
#include <stdlib.h>

int main() {
	int operacao;
	
	do {
		printf("### Menu ###\n");
		printf("\n1 - Cadastrar produto\n");
		printf("\n2 - Alterar produto\n");
		printf("\n3 - Excluir produto\n");
		printf("\n4 - Sair\n");
		printf("\nEscolha a opção: ");
		scanf("%d", &operacao);
		
		switch (operacao) {
			case 1:
				printf("\nOpcao 1\n");
				system("pause");
				break;
			case 2:
				printf("\nOpcao 2\n");
				system("pause");
				break;
			case 3: 
				printf("\nOpcao 3\n");
				system("pause");
				break;
			case 4:
				printf("\nSaindo...\n");
				system("pause");
				break;
			default:
				printf("\nOpcao Invalida\n");
				system("pause");
		} 
		system("cls");
	}	while(operacao != 4);
	return 0;
}
