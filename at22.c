#include <stdio.h>

int main() {
   int dia, mes, ano;
   printf("Digite numero de um dia do mes: ");
   scanf("%d", &dia);
   printf("Digite o numero de um mes: ");
   scanf("%d", &mes);
   printf("Digite um ano: ");
   scanf("%d", &ano);
   printf("A data digitada foi: %02d/%02d/%04d\n", dia, mes, ano);
   return 0;
}
