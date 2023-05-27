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
	
	insSort(l);
	
	printf("\nem ordem\n");
	for (i=0; i< 5; i++){
		printf("%i palavra: %s\n",i + 1, l[i].palavra);
	}
	
	return 0;
}

void insSort(LISTA pal[5]){
	int i,j;
	LISTA k[50];
	 for (i = 1; i < 5; i++) {
	        strcpy(k->palavra, pal[i].palavra);
	        j = i - 1;
	
	        while (j >= 0 && strcmp(pal[j].palavra, k->palavra) > 0) {
	            strcpy(pal[j + 1].palavra, pal[j].palavra);
	            j--;
	        }
	        strcpy(pal[j + 1].palavra, k->palavra);
	}
}