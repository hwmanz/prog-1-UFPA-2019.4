#include <stdio.h>

int main(void){

	double num[100];
	int cont;

	for (cont = 0; cont < 100; cont++){
    scanf("%lf", &num[cont]);

	}

	for (cont = 0; cont < 100; cont++){
		if (num[cont] <= 10){
			printf("A[%d] = %.1f\n", cont, num[cont]);
		}

	}
	return 0;
}
