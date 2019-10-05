#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int contPar = 0, contImpar = 0, cont, par[5], impar[5], num, n;

	for (cont = 0; cont < 15; cont++){
			scanf(" %d", &num);

			if (abs(num % 2) == 1){ //checa se o numero é impar ou par
					if (contImpar == 4){ //checa se o vetor esta cheio
						for (n = 0; n < 5; n++){ //imprime o vetor 
							impar[4] = num;
							printf("impar[%d] = %d\n", n, impar[n]);
							contImpar = 0;
						}
					}else{
						impar[contImpar] = num;
						contImpar++;
					}
			}else if(num % 2 == 0){
					if (contPar == 4){
						for (n = 0; n < 5; n++){
							par[4] = num;
							printf("par[%d] = %d\n", n, par[n]);
							contPar = 0;
						}
					}else{
						par[contPar] = num;
						contPar++;
					}

			}
	}

	for (n = 0; n < contImpar; n++){ //exibição final dos vetores
		printf("impar[%d] = %d\n", n, impar[n]);
	}

	for (n = 0; n < contPar; n++){
		printf("par[%d] = %d\n", n, par[n]);
	}

  return 0;
}
