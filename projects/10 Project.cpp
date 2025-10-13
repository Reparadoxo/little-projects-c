#include <stdio.h>
/*In this example i used define to set the lines and columns of the matrix*/
#define LIN 4
#define COL 4

int main () {
	int Ma[LIN][COL], i, j = 0, soma;
	/*The challenge here is to sum the diagonal of this 4x4 matrix*/
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("Leitura Matriz A: Linha %d Coluna %d: ", i, j);
			scanf("%d", &Ma[i][j]);
			if(i == j) {
				/*The if statment filter the value positions to sum in "Soma"*/
				soma += Ma[i][j];
				printf("O valor %d soma para o total %d\n",  Ma[i][j], soma);	
			}
		}
	}
	
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d ", Ma[i][j]);
		}
		printf("\n");
	}
	printf("A soma final é %d", soma);
	return 0;
}

