#include <stdio.h>

int main(void) {
  float n[30], med = 0;
  int i, qtd = 0;
  for(i = 0; i < 30; i++){
    scanf("%f",&n[i]);
    med += n[i];
    if(n[i] >= 6.0) qtd++;
  }
  printf("Media da turma = %.2f\nQtd Alunos acima da média = %d\n",(med/30.0), qtd);
  printf("---------------\n");
  for(i = 0; i < 30; i++)
    if(n[i] >= 6.0) printf("%.2f\n",n[i]);
  return 0;
}
