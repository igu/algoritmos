#include <stdio.h>

int main(void) {
  int n, i, asw = 1;
  scanf("%d",&n);
  while(n) asw *= n--;
  printf("Resul :: %d\n",asw);
  return 0;
}
