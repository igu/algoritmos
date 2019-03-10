#include <stdio.h>

int main(void) {
  int n, i, j;
  float asw = 0;
  scanf("%d",&n);
  for(i = 1, j = 2; i <= n; i++, j++){
    asw += ((1.0/i++) - (1.0/j++));
  }
  printf("= %.2f\n",asw);
  return 0;
}
