#include <stdio.h>

int main()
{
    int codigo1, codigo2, qtd1, qtd2;
    double valor1, valor2, total, total1, total2;

    scanf("%d %d %lf", &codigo1, &qtd1, &valor1);
    scanf("%d %d %lf", &codigo2, &qtd2, &valor2);

    total1 = (double)qtd1 * valor1;
    total2 = (double)qtd2 * valor2;

    total = total1 + total2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
