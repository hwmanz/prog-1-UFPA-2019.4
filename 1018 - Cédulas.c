#include <stdio.h>

int main(void) {

    int valor, valorOriginal, n100, n50, n20, n10, n5, n2;

    scanf(" %d", &valor);

    /* se realiza uma divisão inteira para descobrir o valor maximo de cada cédula para um valor,
       depois utiliza-se o operando de módulo para remover o valor da quantidade original */

    valorOriginal = valor;

    n100 = valor / 100;
    valor %= 100;

    n50 = valor / 50;
    valor %= 50;

    n20 = valor / 20;
    valor %= 20;

    n10 = valor / 10;
    valor %= 10;

    n5 = valor / 5;
    valor %= 5;

    n2 = valor / 2;
    valor %= 2;

    /* não é necessário fazer n1 = valor % 1; pois dividir por 1 é redundante e "valor" ja possui a
       quantidade de cédulas de 1 real */

    printf("%d\n", valorOriginal);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", valor);

    return 0;
}
