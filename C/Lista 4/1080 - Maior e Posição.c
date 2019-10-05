#include <stdio.h>

int main(void){
    
    // big = 0 pois indica a posição zero do pseudo-vetor n
    
    int n, i, big = 0, pos;
    
    for (i = 1; i <= 100; i++){
        scanf(" %d", &n);
        
        if (n > big){
            big = n;
            pos = i;
            
        }      
    }
    
    printf("%d\n", big);
    printf("%d\n", pos);
    return 0;
}
