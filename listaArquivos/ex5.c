#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *zenit(char *converter){
    int i, qtd = strlen(converter);
    char *newZenit;
    newZenit = (char*) malloc(sizeof(char) * (qtd+1));
    newZenit = converter;
    for(i = 0; i < qtd; i++){
        if(converter[i] == 'Z') newZenit[i] = 'P';
        else if(converter[i] == 'E') newZenit[i] = 'O';
        else if(converter[i] == 'N') newZenit[i] = 'L';
        else if(converter[i] == 'I') newZenit[i] = 'A';
        else if(converter[i] == 'T') newZenit[i] = 'R';
        else if(converter[i] == 'P') newZenit[i] = 'Z';
        else if(converter[i] == 'O') newZenit[i] = 'E';
        else if(converter[i] == 'L') newZenit[i] = 'N';
        else if(converter[i] == 'A') newZenit[i] = 'I';
        else if(converter[i] == 'R') newZenit[i] = 'T';
    }

    return newZenit;
}



int main(int argc, char **argv){

    // ESSA PARTE SERÁ FEITA POR TERMINAL

    char nomeArquivo[40], *criptografado;
    gets(nomeArquivo);

    // FIM DA PARTE QUE SERÁ FEITA POR TERMINAL

    printf("%s.zp\n",zenit(nomeArquivo));

    return 0;
}
