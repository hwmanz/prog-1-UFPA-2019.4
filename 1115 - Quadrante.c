#include <stdio.h>

int main(void){

    int x, y, exec = 1;

    do{
        scanf(" %d %d", &x, &y);

        if (x != 0 && y != 0){

            if (x > 0 && y > 0){
                printf("primeiro\n");

            }else if (x > 0 && y < 0){
                printf("quarto\n");

            }else if (x < 0 && y > 0){
                printf("segundo\n");

            }else if (x < 0 && y < 0){
                printf("terceiro\n");
            }
        }else{
            //done
            exec--;
        }

	}while (exec);

	return 0;
}
