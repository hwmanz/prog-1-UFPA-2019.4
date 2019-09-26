#include <stdio.h>

int main(void){

	int num, penultimo = 0, ultimo = 1, sum;


	scanf("%d", &num);
	num -= 2;

	printf("%d %d", penultimo, ultimo);

	for (; num > 0; num--){
        sum = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = sum;
        printf(" %d", sum);

	}

    printf("\n");

	return 0;
}
