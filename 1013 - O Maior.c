#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int a, b, c, maiorAB, maiorNC;

     scanf("%d %d %d", &a, &b, &c);

     maiorAB = (a + b + abs(a-b)) / 2;
     maiorNC = (c + maiorAB + abs(c-maiorAB)) / 2;

     printf("%d eh o maior\n", maiorNC);

     return 0;
}
