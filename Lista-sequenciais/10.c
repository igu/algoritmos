#include <stdio.h>


int main(void) {
  int p, l, f, res;
  float asw;
  scanf("%d %d", &p, &l);
  asw = (p*l*18.0)/60;
  res = (p*l*18)/60;
  (asw-res > 0 ? printf("%d\n",++res) : printf("%d\n",res));
  printf("%f",asw);
  return 0;
}
