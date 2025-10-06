// Construir um programa que leia 10 elementos inteiros em um vetor A. Construir um vetor B de mesmo tipo e dimensão, em que cada elemento seja o fatorial do elemento correspondente armazenado no vetor A. Apresentar os elementos do vetor B.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    long long int vetorPadrao[10] = {6, 8, 1, 4, 6, 7, 14, 1, 20, 17}, vetorFatorial[10], fatorial;
    int i, j;

    for (i = 0; i < 10; i++) {
        j = vetorPadrao[i];
        fatorial = 1;
        for(j; j >= 1; j--) {
            fatorial *= j;
            vetorFatorial[i] = fatorial;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("O fatorial de %lld é %lld no índice %d do vetor Fatorial\n", vetorPadrao[i], vetorFatorial[i], i);
    }

    return 0;
}
