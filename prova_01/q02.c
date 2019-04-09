#include <stdio.h>

int tem(int per[], int valor, int tam){
  int i;
  for(i = 0; i < tam; i++){
    if(valor == per[i]) return 0;       /* FUNÇÃO PARA CHECAR SE O NÚMERO JÁ EXISTE/ */ 
  }
  return valor;
}

int main(void) {
  int num, aux[10];
  int i, j, qtd = 0;
  for(i = 0; i < 10; i++)         /* INCREMENTA COM ZEROS O ARRAY AUX*/
    aux[i] = 0;
  for(i = 0; i < 10; i++){
    scanf("%d",&num);
    aux[i] = tem(aux,num,10);
    if(aux[i]) qtd++;
  }
  printf("Diferentes: %d\n", qtd);
  return 0;
}
