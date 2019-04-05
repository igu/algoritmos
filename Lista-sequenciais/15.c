#include <stdio.h>

int main(void) {
  float a, b, aux;
  scanf("%f %f",&a, &b);
  aux = a;
  a = b;
  b = aux;
  return 0;
}
