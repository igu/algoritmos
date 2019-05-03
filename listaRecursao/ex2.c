#include <stdio.h>

int expo(int x, int y){
  if (y == 0) return 1;
  else return x * expo(x,y-1);
}

int main(void) {
  printf("Exponenciação: %d\n",expo(4,3));
  return 0;
}
