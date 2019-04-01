#include <stdio.h>
#include <string.h>

int main(void) {
  char string[80], tam, qtd = 0, i;
  printf("\n");
  gets(string);
  tam = strlen(string);
  for(i = 0; i < tam; i++)
    if((string[i] != 'A' && string[i] != 'a') && (string[i] != 'E' && string[i] != 'e')
    && (string[i] != 'i' && string[i] != 'I') && (string[i] != 'o' && string[i] != 'O') && (string[i] != 'u' && string[i] != 'U')) printf("%c",string[i]);
  return 0;
}
