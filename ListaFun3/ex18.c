#include <stdio.h>

int main(void) {
  int a, n, i, asw = 1;
  scanf("%d %d",&a, &n);
  for(i = 0; i < n; i++) asw *= a;
  printf("Resul :: %d\n",asw);
  return 0;
}
