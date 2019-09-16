#include <stdio.h>

int main(void)
{
    int quilometros;
    double litros, consumo;

    scanf(" %d", &quilometros);
    scanf(" %lf", &litros);

    consumo = quilometros / litros;

    printf("%.3f km/l\n", consumo);

    return 0;
}
