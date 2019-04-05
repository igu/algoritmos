#include <stdio.h>

int main(void) {
  int a, b, aux;
  scanf("%d %d", &a, &b);
  if(a>b){
    aux = b;
    b = a;
    a = aux;
  }
  return 0;
}
