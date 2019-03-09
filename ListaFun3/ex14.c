#include <stdio.h>

int main(void) {
  int notas, maior, menor, i; 
  float media = 0; 
  for(i = 0; i < 30; i++){
    scanf("%d",&notas);
    if(!(i)){
      maior = notas;
      menor = notas;
    } 
    else{
      if(maior < notas) maior = notas;
      if(notas < menor) menor = notas;
    } 
    media += notas;
  }
  printf("Maior = %d\nMenor = %d\nMédia = %.2f\n",maior,menor,(media)/4.0);
  return 0;
}
