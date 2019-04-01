#include <stdio.h>
int main(void) {
  char nome[80];
  gets(nome);
  int i;
  for(i = 0; i < 3; i++)
    printf("%c",nome[i]);
  return 0;
}
