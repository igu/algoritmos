#include <stdio.h>

/* 
  Desenvolva um algoritmo que leia 2 notas e calcule 
  a nota final do aluno. Considere a médi ponderada, 
  onde a primeira nota tem peso 2 e a segunda nota 
  tem peso 3.
*/

int main(void) {
  float a, b, c = 5.0;
  scanf("%f %f",&a, &b);
  printf("%.2f",(((a*2)+(b*3))/c));
  return 0;
}