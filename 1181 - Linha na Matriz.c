#include <stdio.h>

int main(void){

	int linha, i, j;
	char operacao;
	double matriz[12][12], resultado = 0;

	scanf(" %d", &linha);
	scanf(" %c", &operacao);

	for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf(" %lf", &matriz[i][j]);
        }
	}

	for (j = 0; j < 12; j++){
        resultado += matriz[linha][j];
	}

	switch (operacao){

    case 'S':
        printf("%.1lf\n", resultado);
        break;

    case 'M':
        printf("%.1lf\n", resultado/12);
        break;
	}

	return 0;
}

