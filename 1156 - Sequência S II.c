#include "stdio.h"
int main(void) {
  
	double i = 1, j = 1, s = 0; 

	for (; i < 39; i += 2, j *= 2){
		s += i/j;
	}

	printf("%.2f\n", s);

  return 0;
}
