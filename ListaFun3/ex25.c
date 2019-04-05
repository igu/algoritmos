#include <stdio.h>

int main(void) {
  float valor;
  int  ciclos = 0;
  scanf("%f",&valor);
  printf("Valor inicial: %.2f\n",valor);
  while(valor >= 0.5){
    valor /= 2.0;
    ciclos++;
  }
  (ciclos ?  printf("Valor final: %.2f\nTempo final: %ds\n", valor, (ciclos*50)) : printf("Valor final: %.2f\nTempo final: %ds\n", valor, (1*50)));
  return 0;
}
