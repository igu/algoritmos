#include <stdio.h>

int main(void) {
  int i, n;
  scanf("%d",&n);
  for(i = 1; i <= n; i++)
    if(!(n%i)) printf("%d\n", i);
  return 0;
}
