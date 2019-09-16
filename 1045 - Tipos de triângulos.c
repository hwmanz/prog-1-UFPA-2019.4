#include <stdio.h>

int main(void){

    double a, b, c, aux;
    scanf(" %lf %lf %lf", &a, &b, &c);

    do {
        if (a < b){
            aux = a;
            a = b;
            b = aux;
        }
        if (b < c){
            aux = b;
            b = c;
            c = aux;
        }
    }while (!((a > b && b > c)|| a == b && b > c || (a > b && b == c || a == b && b == c)));

    if (a >= b + c){
        printf("NAO FORMA TRIANGULO\n");

    }else if (a*a == b*b + c*c){
        printf("TRIANGULO RETANGULO\n");

        if (a == b & b == c){
            printf("TRIANGULO EQUILATERO\n");

        }else if (a == b || b == c ){
            printf("TRIANGULO ISOSCELES\n");
        }
    }else if (a*a > b*b + c*c){
        printf("TRIANGULO OBTUSANGULO\n");

        if (a == b & b == c){
            printf("TRIANGULO EQUILATERO\n");

        }else if (a == b || b == c ){
            printf("TRIANGULO ISOSCELES\n");
        }
    }else if (a*a < b*b + c*c){
        printf("TRIANGULO ACUTANGULO\n");

        if (a == b & b == c){
            printf("TRIANGULO EQUILATERO\n");

        }else if (a == b || b == c ){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
