#include <stdio.h>
#include <stdlib.h>

float preco_kg(float preco_total, float peso_total){
  float preco_kg = preco_total / peso_total;
  return preco_kg;
}

typedef struct {
char descricao[30];
float peso_total;
float preco_total;
float preco_kg;
} Produto;

int main(void){
  Produto carne;
  
  printf("Iforme o valor dessa carne: ");
  scanf("%f", &carne.preco_total);
  printf("Iforme o peso dessa carne: ");
  scanf("%f", &carne.peso_total);
  
  carne.preco_kg = preco_kg(carne.preco_total,     
  carne.peso_total);
  
  printf("%2.f reais o preço do kg", carne.preco_kg);
  return 0;
}