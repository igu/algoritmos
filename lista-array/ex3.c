#include <stdio.h>

int main(void) {
  int n[10], i;
  for(i = 0; i < 10; i++)
    scanf("%d",&n[i]);
  printf("---------------\n");
  for(i = 0; i < 10; i++)
    ((n[i]%2) ? printf("%d impar\n",n[i]) : printf("%d par\n",n[i]));
  return 0;
}
