#include <stdio.h>

int main(void) {
  int n[20], i, par = 20;
  for(i = 0; i < 20; i++)
    scanf("%d",&n[i]);
  printf("---------------\n");
  for(i = 0; i < 20; i++)
    ((n[i]%2) ? par-- : printf("%d par\n",n[i]));
  printf("Qtd pares :: %d\n", par);
  return 0;
}
