#include <stdio.h>

void triangleType(int x, int y, int z){
  if(x + y < z || x + z < y || y + z < x){
    printf("Não forma um triângulo");
  }
  else{
    if(x == y && x == z){
      printf("O triangulo é equilátero");
    }else if(x == y || x == z || y == z){
       printf("O triangulo é isósceles");
    }else{
      printf("O triangulo é escaleno");
    }
  }
}

int main(void) {
  int x, y, z;
  printf("Insira um número para x: ");
  scanf("%i", &x);
  printf("Insira um número para y: ");
  scanf("%i", &y);
  printf("Insira um número para z: ");
  scanf("%i", &z);
  triangleType(x, y, z);
  return 0;
}