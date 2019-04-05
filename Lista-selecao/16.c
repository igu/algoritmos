#include <stdio.h>

int main(void) {
  int a, nv = 0;
  scanf("%d", &a);
  if(a > 360){
    nv = a/360;
    a = a-(360*nv);
  }
  if((a > 0 && a <= 90) || (a < 0 && a >= -90)){
    printf("1 QUADRANTE\nN de Voltas: %d\n",nv);
  }else if ((a > 90 && a <= 180) || (a < -90 && a >= -180)){
    printf("2 QUADRANTE\nN de Voltas: %d\n",nv);
  }else if(((a > 180 && a <= 270) || (a < -180 && a >= -270))){
    printf("3 QUADRANTE\nN de Voltas: %d\n",nv);
  }else {
    printf("4 QUADRANTE\nN de Voltas: %d\n",nv);
  }
  return 0;
}
