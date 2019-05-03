#include <stdio.h>

int sum(int x, int soma){
  if(x == 0) return soma;
  else return sum(x-1,soma+x);
}

int main(void) {
  printf("soma: %d\n",sum(4,0));
  return 0;
}
