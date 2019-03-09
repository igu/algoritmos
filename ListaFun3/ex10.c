#include <stdio.h>

int main(void) {
  int soma = 0, i, n, qtd;
  scanf("%d",&qtd);
  for(i = 0; i < qtd; i++){
    scanf("%d",&n);
    soma += n;
  }
  printf("%d\n",soma);
  return 0;
}
