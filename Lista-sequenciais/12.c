#include <stdio.h>

int main(void) {
  int d;
  scanf("%d", &d);
  printf("%d%d%d%d\n",(d%10),((d/10)%10),((d/100)%10),((d/1000)%10));
  return 0;
}
