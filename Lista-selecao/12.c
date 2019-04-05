#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, delta, x1, x2;
  scanf("%f %f %f", &a,&b,&c);
  delta = pow(b,2)-4*a*c;
  if(delta < 0){
    printf("Não possui raizes reais");
  }else{
    x1 = ((-b) + delta)/(2*a);
    printf("%f\n",x1);
    x2 = ((-b) - delta)/(2*a);
    if (delta > 0){
      printf("Duas raizes reais distintas\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    }else{
      printf("Possui duas raizes reais iguais\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
  }
  return 0;
}
