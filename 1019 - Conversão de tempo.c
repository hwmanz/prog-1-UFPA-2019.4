#include <stdio.h>

int main(void) {

    int horas, minutos, n;

    scanf(" %d", &n);

    horas = n / 3600;
    n %= 3600;

    minutos = n / 60;
    n %= 60;

    printf("%d:%d:%d\n", horas, minutos, n);

    return 0;
}
