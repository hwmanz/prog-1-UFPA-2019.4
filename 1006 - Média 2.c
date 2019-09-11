#include <stdio.h>
#define n 3.14159

int main()
{
    double a, b, c, media, pesoA = 2, pesoB = 3, pesoC = 5;

    scanf(" %lf", &a);
    scanf(" %lf", &b);
    scanf(" %lf", &c);

    media = ((a * pesoA) + (b * pesoB) + (c* pesoC)) / (pesoA + pesoB + pesoC);

    printf("MEDIA = %.1f\n", media);

    return 0;
}
