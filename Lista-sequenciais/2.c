#include <stdio.h>

/* 
  Desenvolva um algoritmo que leia 3 notas e 
  calcule e mostre a média aritmética entre elas.
*/

int main(void) {
  float a, b, c, d = 3.0;
  scanf("%f %f %f",&a, &b, &c);
  printf("%.2f",(a+b+c)/d);
  return 0;
}