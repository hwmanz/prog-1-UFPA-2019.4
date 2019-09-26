#include <stdio.h>

int main(void){

	int i, j;
	char operacao;
	double matriz[12][12], resultado = 0;

	scanf(" %c", &operacao);

	for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf(" %lf", &matriz[i][j]);
        }
	}

	for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            if (i + j < 11 && i < j){
                resultado += matriz[i][j];
            }
        }
	}

	switch (operacao){

    case 'S':
        printf("%.1lf\n", resultado);
        break;

    case 'M':
        printf("%.1lf\n", resultado/30);
        break;
	}

	return 0;
}
