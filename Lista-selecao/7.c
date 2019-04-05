#include <stdio.h>

int main(void) {
  float n1, n2;
  scanf("%f %f", &n1, &n2);
  ((n1*2)+(n2*3)/5)>= 60.0 ? printf("Aprovado\n") : printf("Reprovado\n");
  return 0;
}
