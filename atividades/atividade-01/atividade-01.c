#include <stdio.h>

void main(void) {
  int x = 10;

  if(x >= 0 && x <= 10) printf("Insuficiente");
    else if(x > 10 && x <= 40) printf("Regular");
        else if(x > 40 && x <= 70) printf("Bom");
            else if(x > 70 && x <= 90) printf("Otimo");
                else if(x > 90 && x <= 100) printf("Excelente");
}
