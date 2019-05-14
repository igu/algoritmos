#include <stdio.h>
#include <stdlib.h>
int quantidade = 0;

struct ListaOrdenada{
    int numero;
    struct ListaOrdenada *proximo;
} *inicio;

void imprimirLista(){
    struct ListaOrdenada * atual;
     atual = inicio;
     printf("Lista de todos os números cadastrados\n\n");
     while (atual != NULL) {
         if(atual->proximo == NULL){
            printf("%d\n", atual->numero);
         }else{
            printf("%d - ", atual->numero);
         }
         atual = atual->proximo;
    }
}

void contaMais(){
    quantidade++;
}

void contaMenos() {
    quantidade--;
}

int qtdLista() {
    return quantidade;
}

int inserirOrdem(int numero) {
    struct ListaOrdenada *novo, *menor;
    menor = inicio;
    int retorno = 1;
    novo = (struct ListaOrdenada*) malloc(sizeof(struct ListaOrdenada));
    novo->numero = numero;
    if(inicio == NULL ){
        novo->numero = numero;
        novo->proximo = NULL;
        inicio = novo;
    }else{
        if((quantidade == 1 || inicio->numero > numero)){
            if(menor->numero > numero){
                novo->proximo = menor;
                inicio = novo;
            }else{
                menor->proximo = novo;
                novo->proximo = NULL;
            }
        }else{
            while (menor != NULL){
            if((menor->numero < numero) && (menor->proximo == NULL || (menor->proximo)->numero > numero)){
                novo->proximo = menor->proximo;
                menor->proximo = novo;
            }
            menor = menor->proximo;
            }
        }
    }
    contaMais();
    return retorno;
}

int main(){
    inserirOrdem(5);
    inserirOrdem(2);
    inserirOrdem(8);
    inserirOrdem(26);
    inserirOrdem(6);
    inserirOrdem(3);
    inserirOrdem(10);
    inserirOrdem(1);
    imprimirLista();
    printf("Quantidade lista: %d\n", qtdLista());
    return 0;
}
