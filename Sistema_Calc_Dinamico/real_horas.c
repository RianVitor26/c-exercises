#include <stdio.h>
#include <stdlib.h>
#include <math.h>  

void calcula_hora(float num, int *horas, float *min) {
    *horas = trunc(num);
    *min = (num - trunc(num)) * 60;
  
  printf("%i Hora(s) \n", *horas);
  printf("%2.f Minutos \n", *min);
}

int main() {
  float num;
  int horas;
  float min;

  printf("Informe um número real: ");
  scanf("%f", &num);
  calcula_hora(num, &horas, &min);
}