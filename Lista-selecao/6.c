#include <stdio.h>

int main(void) {
  float n;
  scanf("%f", &n);
  n>= 0.0 && n<=10.0 ? printf("Nota válida\n") : printf("Nota não válida\n");
  return 0;
}
