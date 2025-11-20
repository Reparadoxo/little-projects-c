#include <stdio.h>

typedef struct {
	char nome[50];
	float preco;
	int quantidade;
}Produto;

void mostrarProduto(Produto a) {
	float estoque = 0;
	for (int i = 0; i < 5; i++) {
		estoque = a.quantidade * a.preco;
		printf("Produto: %s | Preço: %.2f | Quantidade: %d\n | Estoque: %.2f\n", a.nome, a.preco, a.quantidade, estoque);
		estoque = 0;
	}
}

int main() {
	Produto lote1[5];
	
	for (int i = 0; i < 5; i++){
		printf("Digite o nome do Produto %d: ", i);
		scanf("%s", lote1[i].nome);
		printf("Digite o preço do Produto %d: ", i);
		scanf("%f", &lote1[i].preco);
		printf("Digite a quantidade do Produto %d: ", i);
		scanf("%d", &lote1[i].quantidade);
	}
	
	printf("\n=== Produtos ===\n");
	for (int i = 0; i < 5; i++) {
		mostrarProduto(lote1[i]);
	}
	return 0;
}
