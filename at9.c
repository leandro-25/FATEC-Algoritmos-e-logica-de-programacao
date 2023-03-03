#include <stdio.h>

int main() {
    int nasc = 0;
    int anoAtual = 0;
    printf("Informe ano de nascimento:\n");
    scanf(" %d",&nasc);
    printf("Informe ano atual:\n");
    scanf(" %d",&anoAtual);
    printf("sua idade e: %d ",anoAtual-nasc);
    return 0;
}
