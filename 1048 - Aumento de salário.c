#include <stdio.h>

int main(void)
{
    double salario, reajustePercentual, reajuste;
    scanf(" %lf", &salario);
    
    if (salario > 2000){
        reajustePercentual = 0.04;
        
    }else if (salario > 1200 && salario <= 2000){
        reajustePercentual = 0.07;
        
    }else if (salario > 800 && salario <= 1200){
        reajustePercentual = 0.1;
        
    }else if (salario > 400 && salario <= 800){
        reajustePercentual = 0.12;
        
    }else if (salario > 0 && salario <= 400){
        reajustePercentual = 0.15;
        
    }
    
    reajuste = salario * reajustePercentual;
    
    printf("Novo salario: %.2f\n", salario + reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %\n", reajustePercentual*100);
    
    return 0;
    
}
