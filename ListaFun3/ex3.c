#include <stdio.h>

int main(void) {
  int soma = 0, i;
  for (i = 1; i <= 200; i++) soma += i;
  printf("%d\n",soma);
  return 0;
}
