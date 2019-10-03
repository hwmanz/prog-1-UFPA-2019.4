#include <stdio.h>

int main(void){

	int n[5], i, j = 0;

	for (i = 0; i < 5; i++){
        scanf(" %d", &n[i]);
	}

	for (i = 0; i < 5; i++){
        if (!(n[i] % 2 == 1 || n[i] % 2 == -1)){
            j++;
        }
	}

	printf("%d valores pares\n", j);

	return 0;
}

