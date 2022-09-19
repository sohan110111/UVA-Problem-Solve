#include <stdio.h>
#include <string.h>
int main()
{

    char inputString[1024];
    while (gets(inputString))
    {
        puts(inputString);
    }

    return 0;
}