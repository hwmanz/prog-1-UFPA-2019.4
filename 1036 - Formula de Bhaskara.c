#include <stdio.h>
#include <math.h>

int main(void){

    double a, b, c, delta, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - (4*a*c);

    if (delta < 0 || a == 0){

        printf("Impossivel calcular\n");

    }else{

         r1 = ((b*-1) + sqrt(delta)) / (2*a);
         r2 = ((b*-1) - sqrt(delta)) / (2*a);

         printf("R1 = %.5f\n", r1);
         printf("R2 = %.5f\n", r2);

    }

    return 0;
}
