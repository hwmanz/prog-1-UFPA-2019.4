#include <stdio.h>
#define DIA 0
#define HORA 1
#define	MINUTO 2
#define SEGUNDO 3

int main(void) {

  int inicio[4], fim[4], dif[4];
  char lixo[4], lixo_;
  
  //variável "lixo" serve pra ler os caracteres apenas para não entrar em conflito com o tipo das outras variáveis

  scanf("%s %d", lixo, &inicio[DIA]);
  scanf("%d %c %d %c %d", &inicio[HORA], &lixo_, &inicio[MINUTO], &lixo_, &inicio[SEGUNDO]);

  scanf("%s %d", lixo, &fim[DIA]);
  scanf("%d %c %d %c %d", &fim[HORA], &lixo_, &fim[MINUTO], &lixo_, &fim[SEGUNDO]);

  //subtrai pra obter a diferenca

  dif[DIA] = fim[DIA] - inicio[DIA];
  dif[HORA] = fim[HORA] - inicio[HORA];
  dif[MINUTO] = fim[MINUTO] - inicio[MINUTO];
  dif[SEGUNDO] = fim[SEGUNDO] - inicio[SEGUNDO];

  /*caso o resultado seja menor que zero, se subtrai 1 da unidade de tempo anterior
  e soma o equivalente ao resultado na unidade da variável para corrigir o "underflow" */

	if (dif[HORA] < 0){
			dif[HORA] += 24;
			dif[DIA] -= 1;
	}

	if (dif[MINUTO] < 0){
			dif[MINUTO] += 60;
			dif[HORA] -= 1;

	}

	if (dif[SEGUNDO] < 0){
			dif[SEGUNDO] += 60;
			dif[MINUTO] -= 1;
	}

	printf("%d dia(s)\n", dif[DIA]);
	printf("%d hora(s)\n", dif[HORA]);
	printf("%d minuto(s)\n", dif[MINUTO]);
	printf("%d segundo(s)\n", dif[SEGUNDO]);

  return 0;
}
