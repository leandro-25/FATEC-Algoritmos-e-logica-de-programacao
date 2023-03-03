#include <stdio.h>

int main() {
    int idade;
    float altura;
    char genero;

    printf("Informe sua idade:\n");
    scanf("%d", &idade);

    printf("Informe sua altura em metros:\n");
    scanf("%f", &altura);

    printf("Informe seu genero (M) para masculino (F) para feminino:\n");
    scanf(" %c", &genero);

    printf("\n\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Genero: %c\n", genero);

    return 0;
}
