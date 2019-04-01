#include <stdio.h>


/*
    Escreva um algoritmo que leia 10 numeros e no momento da leitura do numero, o mesmo devera ficar armazenado de forma crescente no array. Ao final, voce tera os elementos ordenados e dever´a mostra-los
*/


int main(void) {
  int a1[10], i, j, k, num, aux;
  for(i = 0; i < 10; i++){
    scanf("%d",&num);
    if(!i) a1[i] = num;
    else{
      a1[i] = num;
      for(j = 0; j < i; j++){
        for(k = 0; k < i-1; k++){
          printf("SE LIGA 1: %d\n", a1[j]);
          printf("SE LIGA 2: %d\n", a1[j+1]);
          if(a1[j] > a1[k+1]){
            printf("SE LIGA 3: %d\n", a1[j]);
            aux = a1[j];
            a1[j] = a1[k+1];
            a1[k+1] = aux;
            printf("SE LIGA 4: %d\n", a1[j]);
          }
        }
      }
      printf("Valor: %d\n",a1[0]);
    }
  }
  for(i = 0; i < 10; i++){
    printf("%d\n",a1[i]);
  }
    
  return 0;
}
