#include <stdio.h>

/* 
  Desenvolva um algoritmo que receba o número real, 
  correspondente ao salário de um funcionário de 
  uma empresas e calcule o novo salário, 
  sabendo que houve um aumento de 6%
  no salário.
*/

int main(void) {
  float s;
  scanf("%f",&s);
  printf("%.2f",(s*1.06));
  return 0;
}