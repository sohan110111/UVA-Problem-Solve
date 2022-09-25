#include <stdio.h>

int main() {

    int testCases, array[2];
    scanf("%d", &testCases);
    while (testCases--)
    {
        scanf("%d%d", &array[0], &array[1]);
        if(array[0] > array[1]) {
            printf(">\n");
        } else if(array[0] < array[1]) {
            printf("<\n");
        } else {
            printf("=\n");
        }
    }
    
    return 0;
}