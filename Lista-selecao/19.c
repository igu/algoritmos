#include <stdio.h>

int valida_data (d, m, a){
  int aux = 0;
   if((a > 0 && (m >=1 && m <= 12))){
    if(m%2 || m == 8){
      if(d >= 1 && d <= 31) aux++;
      else aux = -1;
    }else{
      if(m == 2){
        if(((a%100 != 0 && a%4 == 0) || a%400 == 0)){
          if(d >= 1 && d <= 29) aux++;
          else aux = -1;
        }else{
          if(d >= 1 && d <= 28) aux++;
          else aux = -1;
        }
      }else{
        if(d >= 1 && d <= 31) aux++;
        else aux = -1;
      }
    }
  }else{
    aux = -1;
  }
  return aux;
}

int main(void) {
  int d1, m1, a1, d2, m2, a2;
  scanf("%d %d %d", &d1, &m1, &a1);
  scanf("%d %d %d", &d2, &m2, &a2);
  if(valida_data(d1,m2,a1) != -1 && valida_data(d2, m2, a2) != -1){
    if(a1 == a2){
      if(m1 == m2){
        if(d1 == d2){
          printf("Pasme as duas datas são exatamete iguais!");
        }else if(d1 < d2){
          printf("%d/%d/%d > %d/%d/%d\n", d1, m1, a1, d2, m2, a2);
        }else {
          printf("%d/%d/%d > %d/%d/%d\n", d2, m2, a2, d1, m1, a1);
        }
      }else if(m1 < m2){
        printf("%d/%d/%d > %d/%d/%d\n", d1, m1, a1, d2, m2, a2);
      }else{
        printf("%d/%d/%d > %d/%d/%d\n", d2, m2, a2, d1, m1, a1);
      }
    }else if(a1 < a2){
      printf("%d/%d/%d > %d/%d/%d\n", d1, m1, a1, d2, m2, a2);
    }else{
      printf("%d/%d/%d > %d/%d/%d\n", d2, m2, a2, d1, m1, a1);
    }
  }else{
    printf("Datas invalidas");
  }
  return 0;
}
