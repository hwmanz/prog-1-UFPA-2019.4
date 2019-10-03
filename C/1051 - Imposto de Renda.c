#include <stdio.h>

int main(void){

    double salario, imposto = 0;

	scanf(" %lf", &salario);

	if (salario <= 2000){
        printf("Isento\n");

	}else if (salario > 2000 && salario <= 3000){
        salario -= 2000;
        imposto = salario * 0.08;

	}else if (salario > 3000 && salario <= 4500){
        salario -= 3000;
        imposto = (1000*0.08) + (salario * 0.18);

	}else{
        salario -= 4500;
        imposto = (1000*0.08) + (1500*0.18) + (salario * 0.28);
	}

	if (imposto != 0){
        printf("R$ %.2f\n", imposto);
	}
	return 0;
}
