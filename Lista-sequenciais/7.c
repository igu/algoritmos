#include <stdio.h>

/* 

  Desenvolva um algoritmo que leia um valor de hora 
  (uma vari�vel para a hora e outra para minuto) e 
  informe quantos minutos se passaram desde o 
  in�cio do dia.

*/

int main(void) {
  int h, m;
  scanf("%d %d",&h, &m);
  printf("%d",((h*60)+m));
  return 0;
}