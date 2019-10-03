#include <stdio.h>

int main(void) {

  double nota1, nota2, nota3, nota4, media;

  scanf(" %lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

  media = ((nota1*2) + (nota2*3) + (nota3*4) + (nota4*1)) / 10;

  //testa pra ver se o aluno deve ir a exame

  printf("Media: %.1f\n", media);

  if (media < 5){

    printf("Aluno reprovado.\n");

  }else if (media >= 7){

    printf("Aluno aprovado.\n");

  }else{

    double exame;

    printf("Aluno em exame.\n");
    scanf(" %lf", &exame);
    printf("Nota do exame: %.1f\n", exame);
    

    media = (media + exame) / 2;

    media >= 5 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n", media);

  }

  return 0;
}
