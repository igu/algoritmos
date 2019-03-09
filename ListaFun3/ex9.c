#include <stdio.h>

int main(void) {
  int soma = 0, i, n;
  for(i = 0; i < 10; i++){
    scanf("%d",&n);
    soma += n;
  }
  printf("%d\n",soma);
  return 0;
}
