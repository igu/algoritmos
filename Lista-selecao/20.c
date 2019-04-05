#include <stdio.h>

int main(void) {
  int a, b, c, aux;
  /* Prof. Coleguinha, esse EOF foi usado para testas vários casos */
  while(scanf("%d %d %d", &a, &b, &c) != EOF){
    printf("Ant: %d %d %d\n", a, b, c);	
    if(a < b && b < c){
	    aux = c;
	    c = a;
	    a = aux;
	    if(c > a){
	      aux = c;
	      c = a;
	      a = aux;
	    }
  	}else if(a > b && c > b){
	    aux = b;
	    b = c;
	    c = aux;
	    if(a < b){
	      aux = b;
	      b = a;
	      a = aux;
	    }
	}else if(a < b && c < b){
	    aux = b;
	    b = a;
	    a = aux;
	    if(c > b){
	      aux = b;
	      b = c;
	      c = aux;
	    }
	}else if(a < b && b > c){
	    aux = a;
	    a = c;
	    c = aux;
		if(c > b) {
		  aux = b;
		  b = c;
		  c = aux;
		}
	}else if(a < b && c > a){
        aux = a;
        a = c;
        c = aux;
        if(c > b){
          aux = b;
		  b = c;
		  c = aux;
        }
    }
    printf("Dps: %d %d %d\n", a, b, c); 
  }
  return 0;
}
