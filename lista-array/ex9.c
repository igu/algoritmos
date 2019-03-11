#include <stdio.h>

int main(void) {
  int n[20], i, aux;
  for(i = 0; i < 20; i++) scanf("%d",&n[i]);
  for(i = 0; i < 10; i++){
    aux = n[i];
    n[i] = n[19-i];
    n[19-i] = aux; 
  }
  printf("\n{");
  for(i = 0; i < 19; i++) printf("%d - ",n[i]);
  printf("%d}\n",n[19]);
  return 0;
}
