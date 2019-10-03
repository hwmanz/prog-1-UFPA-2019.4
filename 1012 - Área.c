#include <stdio.h>
#define pi 3.14159

int main(void)
{
    double a, b, c;

    scanf(" %lf %lf %lf", &a, &b, &c);

    //área do triângulo
    double triangulo = (a * c) / 2;

    //área do circulo
    double circulo = pi * (c * c);

    //área do trapézio
    double trapezio = ((a + b) / 2) * c;

    //área do quadrado
    double quadrado = b * b;

    //área do retangulo
    double retangulo = a * b;

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}
