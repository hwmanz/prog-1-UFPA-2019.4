#include <stdio.h>

int main(void){

    int n1, n2, n3, min, mid, max, aux;

    scanf(" %d", &n1);
    scanf(" %d", &n2);
    scanf(" %d", &n3);

    min = n1;
    mid = n2;
    max = n3;
    do {

        if (max < mid){

            aux = max;
            max = mid;
            mid = aux;
        }

        if (mid < min){

            aux = mid;
            mid = min;
            min = aux;

        }

    } while (!(min < mid < max));

    printf("%d\n", min);
    printf("%d\n", mid);
    printf("%d\n", max);
    printf("\n");
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}
