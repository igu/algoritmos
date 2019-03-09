#include <stdio.h>

int main(void) {
  int i, n = 2;
  for (i = 0; i < 40; i++, n++) printf("%d\n",n++);
  return 0;
}
