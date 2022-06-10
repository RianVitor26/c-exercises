#include <stdio.h>

int functionX(int a, int x, int b){
  int fx;
  
  if(a != 0){
    fx = (a * x) + b;
    return fx;
  } else{
    printf("O 'a' tem que ser diferente de 0");
  }
}

int main(void) {
  int a, x, b;
  int resultado;
  printf("Insira um número para a: ");
  scanf("%i", &a);
  printf("Insira um número para x: ");
  scanf("%i", &x);
  printf("Insira um número para b: ");
  scanf("%i", &b);
  
  resultado = functionX(a, x, b);
  printf("O valor de fx é %i", resultado);
  return 0;
}

