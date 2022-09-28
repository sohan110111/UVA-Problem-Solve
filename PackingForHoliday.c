#include <stdio.h>

int main() {
    int testCases;
    int weight, height, length;
    scanf("%d", &testCases);
    int temp = testCases;

    while(testCases--) {
        scanf("%d%d%d", &length, &weight, &height);
        if(weight > 20 || height > 20 || length > 20) {
            printf("Case %d: bad\n", temp - testCases);
        } else {
            printf("Case %d: good\n", temp - testCases);
        }
    }
    return 0;
}