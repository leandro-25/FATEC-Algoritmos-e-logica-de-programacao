#include <stdio.h>

int main() {
  float num1, num2, num3, num4, media;

  printf("Informe o primeiro numero: ");
  scanf("%f", &num1);

  printf("Informe o segundo numero: ");
  scanf("%f", &num2);

  printf("Informe o terceiro numero: ");
  scanf("%f", &num3);

  printf("Informe o quarto numero: ");
  scanf("%f", &num4);

  media = (num1 + num2 + num3 + num4)/4;

  printf("\n\n");
  printf("A soma dos numeros informados e %.2f\n", media);

  return 0;
}
