#include <stdio.h>

/* 
  Desenvolva um algoritmo que receba um 
  n�mero inteiro e mostre o d�gito das unidades
  desse n�mero.
*/

int main(void) {
  int m;
  scanf("%d",&m);
  printf("%d", (m%=10));
  return 0;
}