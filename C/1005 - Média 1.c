#include <stdio.h>

int main()
{
    double A, B, MEDIA, pesoA = 3.5, pesoB = 7.5;

    scanf(" %lf", &A);
    scanf(" %lf", &B);

    MEDIA = ((A * pesoA) + (B * pesoB)) / (pesoA + pesoB);

    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}
