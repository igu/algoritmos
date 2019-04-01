#include <stdio.h>

int main(void) {
  int a1[30], a2[30], a3[30], qtd = 0, i, j;
  for(i = 0; i < 30; i++)
    scanf("%d %d",&a1[i],&a2[i]);
  for(i = 0; i < 30; i++){
    for(j = 0; j < 30; j++)
      if(a1[i] == a2[j]) a3[qtd++] = a1[i];
  }
  for(i = 0; i < qtd; i++)
    printf("%d\n",a3[i]);
  return 0;
}
