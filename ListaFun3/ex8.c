#include <stdio.h>

int main(void) {
  int i, v2;
  float soma = 0;
  scanf("%d",&v2);
  for(i = 1; i <= v2; i++) soma += 1.0/i;
  printf("%.2f\n",soma);
  return 0;
}
