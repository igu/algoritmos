#include <stdio.h>

int main(void) {
  int i;
  for(i = 1; i <= 200; i++)
    if(!(i%3)) printf("%d\n", i);
  return 0;
}
