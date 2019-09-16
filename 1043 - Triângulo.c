#include <stdio.h>

int main(void){

    double a, b, c;

    scanf(" %lf %lf %lf", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b){

        double perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);

    }else{

        double area = ((a+b) * c) / 2;
        printf("Area = %.1f\n", area);

    }

    return 0;

}
