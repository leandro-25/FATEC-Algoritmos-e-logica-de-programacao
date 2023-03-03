#include <stdio.h>

int main() {
   int dia, mes, ano;
   printf("Digite a data no formato dd/mm/aaaa: ");
   scanf("%d/%d/%d", &dia, &mes, &ano);
   printf("A data digitada foi: %02d/%02d/%04d\n", dia, mes, ano);
   return 0;
}
