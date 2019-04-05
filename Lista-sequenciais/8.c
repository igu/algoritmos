#include <stdio.h>

/* 
  Desenvolva um algoritmo que receba um 
  número inteiro e mostre o dígito das unidades
  desse número.
*/

int main(void) {
  int m;
  scanf("%d",&m);
  printf("%d", (m%=10));
  return 0;
}