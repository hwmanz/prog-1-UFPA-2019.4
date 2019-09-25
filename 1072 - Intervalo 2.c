#include <stdio.h>

int main(void){

    int n, in = 0, out = 0, x;

    scanf(" %d", &n);

    for (; n > 0; n--){
        scanf(" %d", &x);

        if (x <= 20 && x >= 10){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
