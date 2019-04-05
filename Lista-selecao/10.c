#include <stdio.h>
#include <math.h>

int main(void) {
  float a;
  scanf("%f", &a);
  a>=0 ? printf("%.2f\n",sqrt(a)) : printf("%.2f\n",pow(a,2));
  return 0;
}
