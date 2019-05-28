#include <time.h>
#include <stdio.h>

int main(void) {
   clock_t inicio_t, fim_t, total_t;
   int i, j, k;

   inicio_t = clock(); // GET TIME INICIAL

   printf("Inicio = %ld\n", inicio_t);
    
   printf("Iniciando o grande loop: inicio_t =  %ld\n", inicio_t);
   
   for(i = 0; i < 100000; i++) printf(".");

   fim_t = clock(); // GET TIME FINAL
   printf("\nFim do grande loop, fim_t = %ld\n", fim_t);
   
   total_t = (double)((fim_t - inicio_t) / (CLOCKS_PER_SEC / 1000));
   printf("Sua CPU rodou: %ld\n", total_t);
  return 0;
}
