#include <stdio.h>

int main(void) {
  
  int n, cont;

  scanf(" %d", &n);

  for (cont = 1; cont <= 6; ){
    if (n % 2 == 1){
      printf("%d\n", n);
      cont++;
      n++;
    }else{
      n++;
    }
  }
  return 0;
}
