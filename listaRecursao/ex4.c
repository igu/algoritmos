#include <stdio.h>

unsigned long int fib(int n){
  if (n<2) return n;
  else return fib(n-1)+fib(n-2);
}

int main(void) {
  printf("Fatorial: %lu\n",fib(4));
  return 0;
}
