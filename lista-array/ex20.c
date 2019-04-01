#include <stdio.h>

int main(void) {
  int matriculas[5], notas[5], i, j, aux, naux;
  for(i = 0; i < 5; i++)
    scanf("%d %d",&matriculas[i], &notas[i]);
  for(i = 0; i < 5; i++){
    for(j = 0; j < 4; j++){
      if(matriculas[j] > matriculas[j+1]){
        aux = matriculas[j];
        matriculas[j] = matriculas[j+1];
        matriculas[j+1] = aux;
        naux = notas[j];
        notas[j] = notas[j+1];
        notas[j+1] = naux;
      }
    }
  }
  printf("\n");
  for(i = 0; i < 5; i++){
    printf("Matricula: %d - Nota: %d\n",matriculas[i],notas[i]);
  } 
  return 0;
}
