#include <stdio.h>

int main(void) {
  int i, v1 = 1, v2; 
  float soma = 0;
  for(v2 = 1; v2 <= 50; v2++, v1++) soma += ((v1++)+0.00)/v2;
  printf("%.2f\n",soma);
  return 0;
}
