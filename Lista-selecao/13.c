#include <stdio.h>

int modulo(int v) {
  if (v < 0) return -v;
  else return v;  
}

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if((b-c) < a && a < (b+c)){
    if(modulo(a-c) < b && b < (a+c)){
      if(modulo(a-b) < c && c < (a+b)) printf("Eh triangulo");
      else printf("Nao triangulo");
      }
    else{
      printf("Nao triangulo");
    }
  }else{
    printf("Nao triangulo");
  }
  return 0;
}
