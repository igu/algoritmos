#include <stdio.h>

/* 
  Desenvolva um algoritmo que leia 2 notas
  e seus respectivos pesos e calcule a média
  ponderada dessas notas.

*/

int main(void) {
  float a, b, p1, p2;
  scanf("%f %f %f %f",&a, &b, &p1, &p2);
  printf("%.2f",(((a*p1)+(b*p2))/(p1+p2+0.00)));
  return 0;
}