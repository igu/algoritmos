#include <stdio.h>

int main(void) {
  int n1, n2, asw;
  scanf("%d%d",&n1,&n2);
  asw = n1%n2;
  while(asw){
    n1 = n2;
    n2 = asw;
    asw = n1%n2;
  }
  printf("M.D.C = %d\n",n2);
  return 0;
}
