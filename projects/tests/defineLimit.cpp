/*Elaborar um programa que leia um vetor A com 10 elementos
 do tipo inteiro. Construir um vetor B de mesma dimens�o e tipo
 do vetor A. O �ltimo elemento do vetor A deve ser o primeiro
 elemento do vetor B, e o pen�ltimo elemento do vetor A deve ser
 o segundo do vetor B at� que o primeiro elemento do vetor A seja
 o �ltimo do vetor B.*/
#include <stdio.h>
#define TAM 10

int main() {
    int va[TAM], vb[TAM], i, j = TAM - 1;
    printf("digite 10 valores inteiros:");
    for(i=0; i < TAM; i++){
        scanf("%d", &va[i]);
        vb[j] = va[i];
        j--;
    }
    for(i=0; i < TAM; i++){
        printf("%d ", va[i]);
    }

    printf("\n");

    for(i=0; i < TAM; i++){
        printf("%d ", vb[i]);
    }
    return 0;
}
