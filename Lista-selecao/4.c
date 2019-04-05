#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  a>b ? printf("%d\n",a) : printf("%d\n",b);
  return 0;
}
