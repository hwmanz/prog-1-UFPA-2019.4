#include <stdio.h>

int main(void) {
  
  double n;
  int cont, contn = 0;

  for (cont = 1; cont <= 6; cont++){

    scanf(" %lf", &n);

    if (n > 0){
      contn++;  
    }
  }
  printf("%d valores positivos\n", contn);

  return 0;
}
