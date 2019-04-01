#include <stdio.h>

int main(void) {
  int a1[8], a2[8], i, aux;


  for(i = 0; i < 8; i++)
    scanf("%d %d", &a1[i], &a2[i]); /* LER OOS DOIS DA MUDANÇA*/

  for(i = 0; i < 8; i++)
    printf("%d - %d\n", a1[i], a2[i]);  /* IMPRIME ANTES DA MUDANÇA*/
  printf("TROCA\n");

  for(i = 0; i < 8; i++){
    aux = a1[i];
    a1[i] = a2[i];
    a2[i] = aux;
  }

  for(i = 0; i < 8; i++)
    printf("%d - %d\n", a1[i], a2[i]); /* IMPRIME DEPOIS DA MUDANÇA*/
  return 0;
}
