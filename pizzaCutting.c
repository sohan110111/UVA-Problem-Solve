
#include <stdio.h>



int main() {

    long int n;
    while (scanf("%ld", &n), n >= 0) {
        printf("%ld\n", (n*(n+1)/2+1));
    }

    return 0;
}