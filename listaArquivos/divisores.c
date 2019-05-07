#include <stdio.h>
#include "divisores.h"
int gera_divisores(unsigned long int num, FILE * arquivo){
 int i;
 for(i = 1; i <= num; i++){
    if(num%i) fprintf(arquivo, "%d\n", i);
 }
 return 0;
}
