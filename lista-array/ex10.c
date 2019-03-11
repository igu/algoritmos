#include <stdio.h>

int main(void) {
  int a1[10], a2[10], i;
  for(i = 0; i < 10; i++){
    scanf("%d",&a1[i]);
    a2[i] = a1[i]*a1[i];
  }
  for(i = 0; i < 10; i++) printf("Lista A1 = %d - Lista A2 = %d\n",a1[i],a2[i]);
  return 0;
}
