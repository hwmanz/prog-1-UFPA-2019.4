#include <stdio.h>

int main()
{
    int numero;
    double horas, salarioPorHora, salarioTotal;

    scanf(" %d", &numero);
    scanf(" %lf", &horas);
    scanf(" %lf", &salarioPorHora);

    salarioTotal = horas * salarioPorHora;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salarioTotal);

    return 0;
}
