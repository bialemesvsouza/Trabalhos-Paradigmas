#include <stdio.h>

void dobrarValor(int x) {
    x = x * 2;
    printf("Dentro de dobrarValor: x = %d\n", x);
}

int main() {
    int numero = 10;

    printf("Antes de dobrarValor: numero = %d\n", numero);
    dobrarValor(numero);
    printf("Depois de dobrarValor: numero = %d\n", numero);

    return 0;
}
