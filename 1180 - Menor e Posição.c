#include <stdio.h>

int main(void){

	int n, smaller = 1000000, pos, cont;

	scanf(" %d", &n);

	int vector[n];

	for (cont = 0; cont < n; cont++){
        scanf(" %d", &vector[cont]);

        if (vector[cont] < smaller){
            smaller = vector[cont];
            pos = cont;
        }
	}

	printf("Menor valor: %d\n", smaller);
	printf("Posicao: %d\n", pos);

	return 0;
}

