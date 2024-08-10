// Use uma estrutura de repetição para mostrar na saída números inteiros pares entre 1 e 50.
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 50; i++) {
        if (i % 2 != 0) continue;
        printf("%d\n",i);
    }
    
    return 0;
}
