#include <stdio.h>

int main(void) {
  int n, i, soma = 0;
  scanf("%d",&n);
  for(i = 1; i<n; i++)
    soma += ((1/i)-(1/++i));
  return 0;
}
