#include <stdio.h>

int main(void) {
  int d, res;
  scanf("%d", &d);
  ((((d/10000)%100) < 10) ? printf("%d de 0%d de %d",(d/1000000), ((d/10000)%10), (d%10000)) : printf("%d de %d de %d",(d/1000000), ((d/10000)%100), (d%10000)));
  return 0;
}
