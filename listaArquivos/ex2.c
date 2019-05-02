#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int validar_cep(char *cep){
  char *novo;
  novo = cep;
  int qtd = strlen(cep);
  if(qtd != 9) return 0;
  else{
    qtd = 0;
    while(*novo != '\0'){
        if(qtd != 5){
            if(*novo < '0' && *novo > '9') return 0;
        }else{
            if(*novo != '-') return 0;
        }
        novo++;
        qtd++;
    }
  }
  return 1;
}


int main(int argc, char **argv) {
  FILE *regiao;
  char *cep;
  int i, k;
  cep = (char*) malloc(sizeof(char) * 9);

  //PRECISO APRENDER A ABRIR NO TERMINAL

  regiao = fopen("regioes.dat","r");
  if(regiao == NULL){
    printf("Erro ao abrir os dados da região de Natal\n");
    exit(1);
  }

  // ESTA PARTE TEM QUE SER FEITA NO TERMINAL

  printf("Digite o CEP em formato: XXXXX-XXX\n:");

  for(i = 0; i < 9; i++){
    scanf("%c",&cep[i]);
  }

  // FIM DA PARTE QUE TEM SER FEITA EM TERMINAL

  if(validar_cep(cep)){
     char endereco[100];
     while(fgets(endereco,100,regiao) != NULL){
        k = 0;
        while(k != 9){
            if(cep[k] != endereco[k++]){
                k = 10;
                break;
            }
        }
        if(k == 9){
            // CEP IGUAL
            k = 10;
            while(endereco[k] != '\n'){
                printf("%c",endereco[k]);
                k++;
            }
            printf("\n");
        }
     }
  }else{
    printf("CEP invalido\n");
  }

  if(k == 10){
    printf("CEP não encontrado\n");
  }

  fclose(regiao);
  return 0;
}
