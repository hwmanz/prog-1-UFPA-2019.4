#include <stdio.h>

int main(void) {
  
  double n, acumulador;
  int cont, contn = 0;

  for (cont = 1; cont <= 6; cont++){

    scanf(" %lf", &n);

    if (n > 0){
      contn++;
      acumulador += (double)n;  
    }
  }
  printf("%d valores positivos\n", contn);
  printf("%.1f\n", acumulador/(double)contn);

  return 0;
}
