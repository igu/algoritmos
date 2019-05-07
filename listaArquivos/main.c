#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "divisores.h"
void usage(){
 printf("\n\n Uso do programa gera_divisores:\n\n");
 printf(" ./gera_divisores NUM ARQ\n\n");
 printf(" onde NUM é um inteiro com o número cujo divisores se deseja gerar\n");
 printf(" e ARQ é o nome do arquivo a ser criado com os divisores de NUM.");
 printf("TODOS os parâmetros são obrigatórios");
}

int check_parameters(int argc, char **argv){
    if(argc != 3) return 0;
    int i, qtd = strlen(argv[1]);
    for(i = 0; i < qtd; i++)
        if(argv[1][i] < '0' || argv[1][i] > '9') return 0;
    return 1;
}


unsigned long int converte(char *num){
 unsigned long int n = atoi(num);
 printf("%ld",n);
 return n;
}

int main(int argc, char * argv[]) {

 FILE * arq_divisores;
 if (!check_parameters(argc, argv)){
    usage();
    return 1;
 }
    arq_divisores = fopen(argv[2],"w");

 if (arq_divisores== NULL){
     printf("ERROR: Não foi possível abrir o arquivo %s.\n",argv[2]);
     return 2;
 }

 if (gera_divisores(converte(argv[1]),arq_divisores) != 0){
     printf("ERROR: Problemas ao escrever dados no arquivo %s.\n", argv[2]);
     return 3;
 }

    fclose(arq_divisores);
    return 0;
}
