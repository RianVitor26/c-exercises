#include <stdio.h>

float compartilhado(float km){
  float  valor = (km * 1) + 2;
  return valor;
}
float padrao(float km){
  float valor = (km * 1.5) + 3;
  return valor;
}
float conforto(float km){
  float valor = (km * 2.5) + 5;
  return valor;
}
float executivo(float km){
  float valor = (km * 5) + 10;
  return valor;
}

int main() {
  float km;
  int categoria;
  float valorEstimado;
  printf("Quantos km tem o seu trajeto? ");
  scanf("%f", &km);
  printf("Escolha uma categoria para viajar:\n1- Compartilhado\n2- Padrão\n3- Conforto\n4- Executivo\n");
  scanf("%i", &categoria);

 switch(categoria) {
  case 1:
    valorEstimado = compartilhado(km);
    printf("O valor estimado da viajem é: %.2fR$", valorEstimado);
    break;
  case 2:
     valorEstimado = padrao(km);
    printf("O valor estimado da viajem é: %.2fR$", valorEstimado);
    break;
  case 3:
    valorEstimado = conforto(km);
    printf("O valor estimado da viajem é: %.2fR$", valorEstimado);
    break;
  case 4:
    valorEstimado = executivo(km);
    printf("O valor estimado da viajem é: %.2fR$", valorEstimado);
    break;
  default:
    printf("Essa categoria não existe. Tente escolher entre 1 e 4");
}
  return 0;
  }