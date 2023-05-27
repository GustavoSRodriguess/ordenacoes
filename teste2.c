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

    quickSort(palavras, 0, 4);

    printf("\nem ordem:\n");
    for (i = 0; i < 5; i++) {
        printf("%i palavra: %s\n", i + 1, palavras[i]);
    }

    return 0;
}


int partition(char vet[][50], int ini, int fim) {
	int topo,i;
	
    char pivo[50];
    strcpy(pivo, vet[ini]);
    topo = ini;

    for (i = ini + 1; i <= fim; i++) {
        if (strcmp(vet[i], pivo) < 0) {
            topo++;
            char temp[50];
            strcpy(temp, vet[i]);
            strcpy(vet[i], vet[topo]);
            strcpy(vet[topo], temp);
        }
    }

    strcpy(vet[ini], vet[topo]);
    strcpy(vet[topo], pivo);
    return topo;
}

void quickSort(char vet[][50], int ini, int fim) {
	int meio;
	
    if (ini < fim) {
        meio = partition(vet, ini, fim);
        quickSort(vet, ini, meio - 1);
        quickSort(vet, meio + 1, fim);
    }
}
