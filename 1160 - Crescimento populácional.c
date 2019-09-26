#include <stdio.h>

int main(void){

	double taxaA, taxaB;
	int popA, popB, testes, anos;

	scanf(" %d", &testes); // lê o numero de casos de teste

	for (testes; testes != 0; testes--){

        scanf(" %d %d %lf %lf", &popA, &popB, &taxaA, &taxaB);
        taxaA /= 100;
        taxaB /= 100;

        for (anos = 1; anos <= 101; anos++){ // se anos chega em 101, significa que demorará mais de um século

            popA *= 1 + taxaA;
            popB *= 1 + taxaB;

            if (popA > popB){
                break;
            }
        }
        if (anos > 100 ){
            printf("Mais de 1 seculo.\n");

        }else{
            printf("%d anos.\n", anos);
        }
	}
	return 0;
}

