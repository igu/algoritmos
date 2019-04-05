#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, x1, x2;
  scanf("%f %f %f", &a, &b, &c);
  x1 = (((-b)+(sqrt((b*b)-4*a*c)))/(2.0*a));
  x2 = (((-b)-(sqrt((b*b)-4*a*c)))/(2.0*a));
  printf("X'  = %.2f\nX'' = %.2f\n", x1, x2);
  return 0;
}
