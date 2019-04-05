#include <stdio.h>

int main(void) {
  float sf, tv;
  scanf("%f %f",&sf, &tv);
  printf("%.2f",((sf-(sf*0.06))+(tv*0.05)));
  return 0;
}
