#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Meteus Sales de Oliveira e Gustavo Schneider Rodrigues

typedef struct lista{
	char palavra [50];
	//struct lista *prox;
}LISTA;

int main (){
	LISTA l[5];
	
	int i;
	
	for (i=0; i< 5; i++){	
		printf("Digite uma palavra: ");
		scanf("%s", l[i].palavra);
		fflush(stdin);
	}
	
	selectSort(l);
	
	printf("\nem ordem:\n");
	for (i=0; i< 5; i++){
		printf("%i palavra: %s\n",i + 1, l[i].palavra);
	}
	
	
	
	return 0;
}

void selectSort(LISTA palav[5]) {
    int i, j;
    char auxiliar[50];

    for (i = 0; i < 5; i++) {
        int aux = i;

        for (j = i + 1; j < 5; j++) {
            if (strcmp(palav[j].palavra, palav[aux].palavra) < 0) {
                aux = j;
            }
        }
        if (aux != i) {
            strcpy(auxiliar, palav[i].palavra);
            strcpy(palav[i].palavra, palav[aux].palavra);
            strcpy(palav[aux].palavra, auxiliar);
        }
    }
}







