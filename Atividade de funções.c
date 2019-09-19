#include <stdio.h>
#include <math.h>
#define pi 3.14159

// perimetro circunferencia
double pecirc(double r){
double p = 2*3.14159*r;
return p;
}

//inicio da função para a area do circulo
double areaCirculo(double r)
{  
    double circle = pi * pow(r,2);

    return circle;
  }
// fim da função para a rea do circulo

//inicio da função para a area do retangulo
double areaRet(double b,double h){
  double ret = b*h; 

  return ret;
}
//fim da função para a area do retangulo

double losangulo(double d, double D){
    double area = (d * D) / 2;
    return area;
  }

	// area trapezio e triangulo
#include <stdio.h>
double areaTrapezio(double A, double B, double C){
  double area;
  area = ((A+B)*C)/2;
  return area;
}
double areaTriangulo(double A, double B){
  double area;
  area = (A * B)/2;
  return area;
}

//Area losango
double losango(double d, double D){
    double area = (d * D) / 2;
    return area;
  }


// poligono
double poligonoR(double lado, double apotema, double lados){
    double area = apotema*lado*lados / 2; //calculo area
    if(lados<3){ //se for menor que 3 não tem
      printf("nao ha poligono");
    }
    else{
      printf("%.2f", area);
    }
    return area;

  }

  //verificacao triangulo
  void VerificacaoTriangulo(double A, double B, double C){

 
    if ((A == B) && (B == C)){  //VERIFICA TRIANGULO EQUILATERO
 
        printf ("TRIANGULO EQUILATERO\n");
  
    }
    
    if (((A == B) || (A == C) || (B == C)) && ((B != A) || (B != C) || (B != C))){ //VERIFICA TRIANGULO ISOSCELES
 
        printf ("TRIANGULO ISOSCELES\n");
 
    }
    
    if ((A != B) && (A != C) && ( B != C)){ //VERIFICA TRIANGULO ESCALENO

        printf ("TRIANGULO ESCALENO\n");

    }
  }

void menu(void){

	char operacao;
	double resultado, raio, ladoA, ladoB, ladoC, base, altura, D, d, lados, nlados, apotema;

	printf("Escolha uma operacao:\n");
	printf("A. Area de um circulo\n");
	printf("B. Area de um retangulo\n");
	printf("C. Area de um triangulo\n");
	printf("D. Area de um losango\n");
	printf("E. Verificação de triangulo\n");
	printf("F. Perimetro de uma circunferencia\n");
	printf("G. Area de um poligono regular\n");

	scanf(" %c", &operacao);
	
	switch (operacao){
		// caso area do circulo
		case 'A':
			printf("Insira o raio do circulo: ");
			scanf(" %lf", &raio);
			resultado = areaCirculo(raio);
			printf("Resultado: %.2f unidades\n", resultado);
			break;
		// caso area de retangulo
		case 'B':
			printf("Insira os lados do retangulo: ");
			scanf(" %lf %lf", &ladoA, &ladoB);
			resultado = areaRet(ladoA, ladoB);
			printf("Resultado: %.2f unidades\n", resultado);
			break;
		// caso area de um triangulo
		case 'C':
			printf("Insira a base e a altura do triangulo: ");
			scanf(" %lf %lf", &base, &altura);
			resultado = areaTriangulo(base, altura);
			printf("Resultado: %.2f unidades\n", resultado);
			break;
		// caso area de um losango
		case 'D':
			printf("Insira as diagonais do losango: ");
			scanf(" %lf %lf", &d, &D);
			resultado = losango(d, D);
			printf("Resultado: %.2f unidades\n", resultado);
			break;
		// caso verificação de triangulo
		case 'E':
			printf("Insira os lados do triangulo: ");
			scanf(" %lf %lf %lf", &ladoA, &ladoB, &ladoC);
			VerificacaoTriangulo(ladoA, ladoB, ladoC);
			break;
		// caso perimetro de circunferencia
		case 'F':
			printf("Insira o raio da circunferencia: ");
			scanf(" %lf", &raio);
			resultado = pecirc(raio);
			printf("Resultado: %.2f unidades\n", resultado);
		// caso area de poligono
		case 'G'	:
			printf("Insira o numero de lados do poligono: ");
			scanf(" %lf", &nlados);
			printf("Insira o tamanho dos lados do poligono: ");
			scanf(" %lf", &lados);
			printf("Insira o apotema do poligono: ");
			scanf(" %lf", &apotema);
			resultado = poligonoR(nlados, apotema, lados);
	}
}


int main(void){

	menu();

	return 0;
}
