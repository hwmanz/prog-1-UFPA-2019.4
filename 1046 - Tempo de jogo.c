#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf(" %d %d", &n1, &n2);
    
    if (n1 >= n2) {
        n2 += 24;
        n2 -= n1;
        
    }else{
        n2 -= n1;
    }
    printf("O JOGO DUROU %d HORA(S)\n", n2);
    
}
