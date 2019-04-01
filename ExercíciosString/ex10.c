#include <stdio.h>
#include <string.h>

int main(void) {
  char mensagem[80], i;
  printf("\n");
  gets(mensagem);
  printf("Antes: %s\n",mensagem);
  for(i = 0; i < strlen(mensagem); i++){
    if(mensagem[i] == 'z' || mensagem[i] == 'Z') mensagem[i] = 'p';
    else if(mensagem[i] == 'e' || mensagem[i] == 'E') mensagem[i] = 'o';
    else if(mensagem[i] == 'n' || mensagem[i] == 'N') mensagem[i] = 'l';
    else if(mensagem[i] == 'i' || mensagem[i] == 'I') mensagem[i] = 'a';
    else if(mensagem[i] == 't' || mensagem[i] == 'T') mensagem[i] = 'r';
    else{
      if(mensagem[i] == 'p' || mensagem[i] == 'P') mensagem[i] = 'z';
      else if(mensagem[i] == 'o' || mensagem[i] == 'O') mensagem[i] = 'e';
      else if(mensagem[i] == 'l' || mensagem[i] == 'L') mensagem[i] = 'n';
      else if(mensagem[i] == 'a' || mensagem[i] == 'A') mensagem[i] = 'i';
      else if(mensagem[i] == 'r' || mensagem[i] == 'R') mensagem[i] = 't';
    }
  }
  printf("Depois: %s\n",mensagem);
  return 0;
}
