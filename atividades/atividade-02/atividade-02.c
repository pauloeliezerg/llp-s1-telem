#include <stdio.h>

void main() {
    int i;

    for (i = 1; i <= 50; i++) {
        if (i % 2 != 0) continue;
        printf("%d\n",i);
    }
}
