#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *contaLinhas;
    int contador = 0;
    char linhas[100];
    contaLinhas = fopen("lista.txt", "r");
    if(contaLinhas == NULL){
        printf("Impossível abrir este arquivo.");
        exit(0);
    }

    while(fgets(linhas,100,contaLinhas) != NULL) contador++;
    
    fclose(contaLinhas);
    printf("Quantidade de linhas: %d\n", contador);
    return 0;
}
