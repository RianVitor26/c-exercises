#include <stdio.h>

int equacao(int a, int b){
  int result;
  result = (a*2) + (b*3);
    return result;
}

int main (void){
  int a, b, soma;
  printf("insira o valor de a: ");
  scanf("%i", &a);
  printf("insira o valor de b: ");
  scanf("%i", &b);

  soma = fd(a,b);
  printf("%i", soma);

  return 0;
}