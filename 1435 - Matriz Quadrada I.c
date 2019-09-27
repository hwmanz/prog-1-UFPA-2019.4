#include <stdio.h>
#include <stdlib.h>

int main(void){

    int matriz[100][100], i, j, num, exec = 1, inversenum = 0, auxnum, cont = 1;
    while (1){

        scanf(" %d", &num);

        auxnum = num;

        if (num < 1) {
            break;
        }

        while ((inversenum <= auxnum)) {
            for (i = inversenum; i < auxnum; i++){
                for (j = inversenum; j < auxnum; j++){
                    matriz[i][j] = cont;
                }
            }
            inversenum++;
            cont++;
            auxnum--;
        }

        for (i = 0; i < num; i++){
            for (j = 0; j < num; j++){
                if (j == 0){
                    printf("%3d", matriz[i][j]);
                }else{
                    printf("%4d", matriz[i][j]);
                }
            }
        printf("\n");
        }
        printf("\n");
        inversenum = 0;
        cont = 1;
    }
    return 0;
}
