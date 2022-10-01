#include <stdio.h>
#include <stdlib.h>


int main() {

    int a, b, dif;
    while (1) {
        scanf("%d%d", &a, &b);
        if (a < 0 && b < 0) {
            break;
        } 
        else {
            dif = abs(a - b);
            if(dif > 50){
                printf("%d\n", 100 - dif);
            }
            else {
                printf("%d\n", dif);
            }
        }
    }

    return 0;
}