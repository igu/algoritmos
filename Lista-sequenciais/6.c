#include <stdio.h>

/* 
  Desenvolva um algoritmo que receba o sal�rio-base de um 
  funcion�rio e calcule quanto ele deve receber. Sabe-se
  que o funcion�rio tem uma gratifica��o de 5% sobre o 
  sal�rio-base e paga imposto de 7 sobre o sal�rio-base
*/

int main(void) {
  float s;
  scanf("%f",&s);
  printf("%.2f",((s*1.05)-(s*0.07)));
  return 0;
}