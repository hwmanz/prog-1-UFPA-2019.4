#include <stdio.h>

int main(void){
    int x, y, aux, acumulador = 0;

    scanf(" %d", &y);
    scanf(" %d", &x);

    if (x > y){
        aux = x;
        x = y;
        y = aux;
    }

    if (x % 2 == 1 || x % 2 == -1){
        x++;
    }

    for (; x < y; x++){
        if (x % 2 == 1 || x % 2 == -1){
            acumulador += x;
            }
        }

    printf("%d\n", acumulador);

    return 0;
}
