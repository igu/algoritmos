#include <stdio.h>

int main(void) {
  char nome[80];
  gets(nome);
  int i = 0, qtd = 0;
  while(nome[i] != '\0'){ 
    if((nome[i] >= 'a' && nome[i] <= 'z') || (nome[i] >= 'A' && nome[i] <= 'Z')) qtd++;
    i++;
  }
  printf("Quantidade de letras: %d\n", qtd);
  return 0;
}
