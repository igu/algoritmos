#include <stdio.h>

int main(void) {
  int i, n, m;
  scanf("%d %d", &n, &m);
  if(n > m){
    i = n;
    n = m;
    m = i; 
  }
  printf("{");
  for (i = n; i < m; i++) printf("%d - ",i);
  printf("%d}",m);
  return 0;
}
