#include <stdio.h>

int main(void) {
  
  int cod, qtd;
  double total;

  scanf(" %d %d", &cod, &qtd);

  switch(cod){

    case 1:
      total = (double)qtd * 4.0;
      break;
    case 2:
      total = (double)qtd * 4.5;
      break;
    case 3:
      total = (double)qtd * 5.0;
      break;
    case 4:
      total = (double)qtd * 2.0;
      break;
    case 5:
      total = (double)qtd * 1.5;
      break;
  }

  printf("Total: R$ %.2f\n", total);

  return 0;
}
