#include <stdio.h>
#include <string.h>
int main(void) {
  char palavra[80], tam, i;
  gets(palavra);
  tam = strlen(palavra);
  for(i = tam; i >= 0; i--)
    printf("%c",palavra[i]);
  return 0;
}
