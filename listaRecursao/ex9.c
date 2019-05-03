#include <stdio.h>

int Euclides(int m, int n){
  if(n == 0) return m;
  else return Euclides(n, m%n);
}

int main(void) {
  printf("Euclides: %d\n", Euclides(30,45));  
  return 0;
}
