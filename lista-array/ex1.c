
#include <stdio.h>

int main(void) {
  int n[10], i;
  for(i = 0; i < 10; i++)
    scanf("%d",&n[i]);
  for(i = 0; i < 10; i++)
    printf("%d\n",n[i]);
  return 0;
}
