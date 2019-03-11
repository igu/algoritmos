#include <stdio.h>

int main(void) {
  int n, i;
  scanf("%d",&n);
  for(i = 2; i < n; i++) if(!(n%i)) i = n;
  ((i <= n) ? printf("Eh primo") : printf("Nao eh primo")); 
  return 0;
}
