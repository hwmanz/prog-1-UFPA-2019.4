#include <stdio.h>

int main(void) {

    double velocidadeMedia, tempo, distancia, consumo;

    scanf(" %lf", &tempo);
    scanf(" %lf", &velocidadeMedia);

    distancia = velocidadeMedia*tempo;

    consumo = distancia / 12;

    printf("%.3f\n", consumo);

    return 0;
}
