#include <stdio.h>

int main(void){

	int casos, x, y;

	scanf(" %d", &casos);

	for (; casos > 0; casos--){
        scanf(" %d %d", &x, &y);

        if (y == 0){
            printf("divisao impossivel\n");

        }else{
            printf("%.1f\n", (double)x / y);
        }
    }

	return 0;
}
