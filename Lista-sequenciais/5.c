#include <stdio.h>

/* 
  Desenvolva um algoritmo que receba o n�mero real, 
  correspondente ao sal�rio de um funcion�rio de 
  uma empresas e calcule o novo sal�rio, 
  sabendo que houve um aumento de 6%
  no sal�rio.
*/

int main(void) {
  float s;
  scanf("%f",&s);
  printf("%.2f",(s*1.06));
  return 0;
}