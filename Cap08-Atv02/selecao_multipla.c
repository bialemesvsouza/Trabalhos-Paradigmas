#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int opcao, numero;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Calcular o quadrado de um numero\n");
        printf("2 - Calcular o fatorial de um numero\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                printf("Quadrado de %d = %d\n", numero, numero * numero);
                break;
            case 2:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                printf("Fatorial de %d = %d\n", numero, fatorial(numero));
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}
