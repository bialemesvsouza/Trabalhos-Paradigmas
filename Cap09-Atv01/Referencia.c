#include <stdio.h>

void dobrarReferencia(int *x) {
    *x = *x * 2;
    printf("Dentro de dobrarReferencia: x = %d\n", *x);
}

int main() {
    int numero = 10;

    printf("Antes de dobrarReferencia: numero = %d\n", numero);
    dobrarReferencia(&numero); 
    printf("Depois de dobrarReferencia: numero = %d\n", numero);

    return 0;
}
