#include <stdio.h>

int main(void){

	int n1, n2, acum = 0, exec = 1, aux;

	do {
        scanf(" %d %d", &n1, &n2);

        if (n2 < n1){
            aux = n1;
            n1 = n2;
            n2 = aux;

        }

        if (n1 > 0 && n2 > 0){
            for (; n1 <= n2; n1++){
                acum += n1;
                printf("%d ", n1);
            }
            printf("Sum=%d\n", acum);
            acum = 0;

        }else{
            exec--;
        }
	} while (exec);

	return 0;
}
