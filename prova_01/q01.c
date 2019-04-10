#include <stdio.h>

int main(void) {
  int n, i;
  float soma = 0;
  scanf("%d",&n);
  for(i = 1; i < n; i += 2)
    soma += ((1/(i+0.0))-(1.0/(i+1.0)));
  printf("Soma: %f\n",soma);
  return 0;
}
