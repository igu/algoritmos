#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  if(a >= 0 && a <= 90) printf("1 QUADRANTE\n");
  else if(a > 90 && a <= 180) printf("2 QUADRANTE\n");
  else if(a > 180 && a <= 270) printf("3 QUADRANTE\n");
  else printf("4 QUADRANTE\n");
  
  return 0;
}
