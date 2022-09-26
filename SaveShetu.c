#include <stdio.h>
#include <string.h>

int main() {

    int testCases;
    char string[100];
    int sum = 0, number;
    scanf("%d", &testCases);
    while (testCases--)
    {
        scanf("%s", &string);
        if (strcmp(string, "donate") == 0) 
        {
            scanf(" %d\n", &number);
            sum+=number;

        }else{
            printf("%d\n", sum);
        }
        
    }
    
    return 0;
}