#include <stdio.h>

int main(void) {
  int n, qtd = 0, soma = 0;
  while(scanf("%d",&n),n){
    qtd++;
    soma += n;
  }
  printf("Qtd :: %d\nSoma :: %d\n", qtd, soma);
  return 0;
}
