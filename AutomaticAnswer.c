#include <stdio.h>
#include <stdlib.h>

int main() {

    int testCases, num;
    scanf("%d", &testCases);
    while (testCases--)
    {
        scanf("%d", &num);
        printf("%d\n", abs((((((((num*567)/9)+7492)*235)/47)-498)/10)%10));
    }
    
    return 0;
}