#include <stdio.h>

int main() {
    int testCases, array[3], i=1;
    scanf("%d", &testCases);
    while(i<=testCases) {
        scanf("%d%d%d", &array[0], &array[1], &array[2]);
        if ((array[0]<array[1] && array[1]<array[2]) || (array[0]>array[1] && array[1]>array[2])) {
            printf("Case %d: %d\n", i, array[1]);
        } else if (array[1]<array[0] && array[0]<array[2] || array[1]>array[0] && array[0]>array[2]){
            printf("Case %d: %d\n", i, array[0]);
        } else {
            printf("Case %d: %d\n", i, array[2]);
        }
        i++;  
    }
    return 0;
}