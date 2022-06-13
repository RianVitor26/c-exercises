#include "math.h"
#include "stdio.h"
#include <stdlib.h> 

int main(void) {
	  int *vetor1, *vetor2, i, tamanho;
    printf("Informe o tamanho desejado para o vetor:");
    scanf("%d",&tamanho);
    vetor1 = (int *) malloc(tamanho * sizeof(int));
    vetor2 = (int  *) malloc(tamanho * sizeof(int));
  
    for(int i=0; i<tamanho; i++){
        printf("\nInforme o valor para a posicao %d do vetor 1: ", i+1);
        scanf("%d",&vetor1[i]);
    }
    for(int i=0; i<tamanho; i++){
         printf("\nInforme o valor para a posicao %d do vetor 2: ", i+1);
         scanf("%d",&vetor2[i]);
    }

	float subtr = 0;

	for (int i = 0; i < sizeof(vetor1[i]) / sizeof(vetor2[0]); i++) {
		subtr = vetor1[i] - vetor2[i];
		subtr = powf(subtr, 2);
		printf("%.2f\n", sqrtf(subtr));
	}

	return 0;
}