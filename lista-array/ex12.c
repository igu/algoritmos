#include <stdio.h>

int main(void) {
  int a1[10], a2[10], a3[10], i;
  for(i = 0; i < 10; i++)
    scanf("%d %d", &a1[i], &a2[i]);
  for(i = 0; i < 10; i++)
    a3[i] = a1[i] * a2[i];
  return 0;
}
