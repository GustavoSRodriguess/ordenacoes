#include <stdio.h>
#include <string.h>

//Meteus Sales de Oliveira e Gustavo Schneider Rodrigues

int main() {
    char palavras[5][50];
    int i;

    for (i = 0; i < 5; i++) {
        printf("digite a %i palavra: ", i + 1);
        scanf("%s", palavras[i]);
        fflush(stdin);
    }

    merge(palavras, 0, 4);

    printf("\nem ordem:\n");
    for (i = 0; i < 5; i++) {
        printf("%i palavra: %s\n", i + 1, palavras[i]);
    }

    return 0;
}

void mergeSort(char palavras[4][50], int esquerda, int meio, int direita) {
    int i, j, k;
    int L1 = meio - esquerda + 1;
    int L2 = direita - meio;
    char ladoEsquerdo[L1][50], ladoDireito[L2][50];

    // lado Esquerdo
    for (i = 0; i < L1; i++) {
        strcpy(ladoEsquerdo[i], palavras[esquerda + i]);
    }

    // lado Direito
    for (j = 0; j < L2; j++) {
        strcpy(ladoDireito[j], palavras[meio + 1 + j]);
    }

    i = 0;
    j = 0;
    k = esquerda;

    while (i < L1 && j < L2) {
        if (strcmp(ladoEsquerdo[i], ladoDireito[j]) <= 0) {
            strcpy(palavras[k], ladoEsquerdo[i]);
            i++;
        } else {
            strcpy(palavras[k], ladoDireito[j]);
            j++;
        }
        k++;
    }

    while (i < L1) {
        strcpy(palavras[k], ladoEsquerdo[i]);
        i++;
        k++;
    }

    while (j < L2) {
        strcpy(palavras[k], ladoDireito[j]);
        j++;
        k++;
    }
}

void merge(char palavras[4][50], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        merge(palavras, esquerda, meio);
        merge(palavras, meio + 1, direita);
        mergeSort(palavras, esquerda, meio, direita);
    }
}
