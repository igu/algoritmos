#include <stdio.h>

int main(void) {
  int a1[30], a2[30], a3[60], i;
  for(i = 0; i < 30; i++)
    scanf("%d %d",&a1[i],&a2[i]);
  for(i = 0; i < 30; i++){
    a3[i] = a1[i];
    a3[30+i] = a2[i];
  }
  for(i = 0; i < 60; i++)
    printf("%d\n",a3[i]);
  return 0;
}
