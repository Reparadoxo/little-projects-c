#include <stdio.h>
#include <stdlib.h>

int main() {
	int operacao;
	//This is a simple example of the switch case condicional
	do {
        //The do while iteration makes a selection menu 
		printf("### Menu ###\n");
		printf("\n1 - Cadastrar produto\n");
		printf("\n2 - Alterar produto\n");
		printf("\n3 - Excluir produto\n");
		printf("\n4 - Sair\n");
		printf("\nEscolha a opção: ");
		scanf("%d", &operacao);
		
		switch (operacao) {
            // input: A number between 1 to 4
            //output: Prints the selected number, except number 4, that exits the program
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
            // If not recognized, the program will print an advice
			default:
				printf("\nOpcao Invalida\n");
				system("pause");
		}
        // Cleans the screen information 
		system("cls");
	}	while(operacao != 4);
	return 0;
}
