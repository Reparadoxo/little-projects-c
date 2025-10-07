#include <stdio.h>
/*In this test, i will use define for the limit of the arrays, this trick saves a lot  of time.*/
#define TAM 10

int main() {
    /*This algorithim does a replace in the array A's last elements to the first place's in the array B.*/
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
