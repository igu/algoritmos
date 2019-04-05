#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  a%2 ? printf("Impar\n") : printf("Par\n");
  return 0;
}
