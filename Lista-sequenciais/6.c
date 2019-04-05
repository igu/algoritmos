#include <stdio.h>

/* 
  Desenvolva um algoritmo que receba o salário-base de um 
  funcionário e calcule quanto ele deve receber. Sabe-se
  que o funcionário tem uma gratificação de 5% sobre o 
  salário-base e paga imposto de 7 sobre o salário-base
*/

int main(void) {
  float s;
  scanf("%f",&s);
  printf("%.2f",((s*1.05)-(s*0.07)));
  return 0;
}