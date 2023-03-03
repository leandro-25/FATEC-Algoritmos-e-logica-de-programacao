#include <stdio.h>

int main() {
    int fih = 0;
    printf("informe a temperatura de fihrenheit:");
    scanf (" %d",&fih);
    printf("valor convertido para celcius; %d ", ((fih-32)*5)/9);
    return 0;
}
