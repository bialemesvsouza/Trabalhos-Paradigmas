#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
};

int main() {
    struct Livro livro1;
    strcpy(livro1.titulo, "Dom Casmurro");
    strcpy(livro1.autor, "Machado de Assis");
    livro1.anoPublicacao = 1899;

    printf("Livro:\n");
    printf("Titulo: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Ano: %d\n", livro1.anoPublicacao);

    return 0;
}
