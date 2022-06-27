#include <stdio.h>

struct Produto{
	char descricao[30];
	float peso_total;
	float preco_total;
	float preco_kg;
};

typedef struct {
	char descricao[30];	
	float peso_total;
	float preco_total;
	float preco_kg;
} Produto;

Produto produto;

float calcula_preco_kg(float peso, float preco){

	float preco_kg = preco / peso;
	
	return preco_kg;
}

int main(){

	Produto produto;

	printf("Insira a descricao do produto: \n");
	scanf("%s", &produto.descricao[30]);
	printf("Insira o Peso total do produto: \n");
	scanf("%f", &produto.peso_total);
	printf("Insira o Preco Total do produto: \n");
	scanf("%f", &produto.preco_total);


	float preco_kg = calcula_preco_kg(produto.peso_total, produto.preco_total);

	printf("Descricao do Produto: %s \n", produto.descricao);
	printf("Peso Total do Produto: %f \n", produto.peso_total);
	printf("Preco Total do Produto: %f \n", produto.preco_total);	
	printf("Peso por KG Total: %f \n", preco_kg);
	}
