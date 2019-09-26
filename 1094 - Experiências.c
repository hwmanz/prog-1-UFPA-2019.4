#include <stdio.h>

int main(void){

	int casos, n, cont, exp[] = {0, 0, 0, 0};
	char cobaia;

	scanf(" %d", &casos);

	for (; casos > 0; casos--){
        scanf(" %d %c", &n, &cobaia);

        switch (cobaia){

        case 'C':
            exp[0] += n;
            exp[3] += n;
        break;

        case 'R':
            exp[1] += n;
            exp[3] += n;
        break;

        case 'S':
            exp[2] += n;
            exp[3] += n;
        break;
        }
	}

    double percentualS, percentualR, percentualC;

    percentualS = (double)exp[2]/exp[3] * 100;
    percentualC = (double)exp[0]/exp[3] * 100;
    percentualR = (double)exp[1]/exp[3] * 100;

    printf("Total: %d cobaias\n", exp[3]);
    printf("Total de coelhos: %d\n", exp[0]);
    printf("Total de ratos: %d\n", exp[1]);
    printf("Total de sapos: %d\n", exp[2]);
    printf("Percentual de coelhos: %.2f %%\n", percentualC);
    printf("Percentual de ratos: %.2f %%\n", percentualR);
    printf("Percentual de sapos: %.2f %%\n", percentualS);

	return 0;
}

