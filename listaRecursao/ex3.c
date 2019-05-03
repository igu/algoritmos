#include <stdio.h>

int fat(int n){
  if (n == 1) return 1;
  else return n * fat(n-1);
}

int main(void) {
  printf("Fatorial: %d\n",fat(4));
  return 0;
}
