#include <stdio.h>

int main(void){

    int i = 1, localI = 1, n, novoCalculo, invalido = 1;
    double nota, soma = 0;
  
    do { //repita a o codigo enquanto o usuario pedir, loop principal

		localI = 1; // reiniciando a variável que mantem o loop rodando

        for (n = 0; n < 2; n++){ // loop para ler as duas notas

            do { // loop usado para garantir que o programa só precisará de dois inputs validos, simplificável
                scanf(" %lf", &nota);

                if (nota <= 10 && nota >= 0){ // testa se a nota é valida 
                    soma += nota;
                    invalido = 0;

                }else{
                    printf("nota invalida\n");
                    continue;
                }

            }while (invalido); invalido = 1; //reiniciando a variável que mantem o loop de verificação rodando 
        }

        printf("media = %.2f\n", soma/2);

		do{ // loop para perguntar se o usuario deseja continuar, simplificável. "checkpoint"
			printf("novo calculo (1-sim 2-nao)\n");
			scanf(" %d", &novoCalculo);

			if (novoCalculo == 1){
				localI = 0; // fecha o checkpoint
				soma = 0; // reinicia a soma

			}else if (novoCalculo == 2){
				localI = 0; // fecha o checkpoint
				i = 0; // fecha o loop principal 
			}
		}while (localI);

    }while (i);


    return 0;
}
