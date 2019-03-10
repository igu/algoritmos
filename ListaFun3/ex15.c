#include <stdio.h>

int main(void) {
  int par = 0, imp = 0, n, v;
  scanf("%d",&n);
  while(n--){
    scanf("%d", &v);
    ((v%2) ? imp++ : par++); 
  }
  printf("Impares = %d\nPares = %d\n", imp, par);
  return 0;
}
