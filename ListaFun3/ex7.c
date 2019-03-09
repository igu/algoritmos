#include <stdio.h>

int main(void) {
  int i, v1 = 1, v2, soma = 0;
  for(v2 = 1; v2 <= 50; v2++, v1++) soma += (v1++)/v2;
  printf("%d\n",soma);
  return 0;
}
