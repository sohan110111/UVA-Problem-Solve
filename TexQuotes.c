#include <stdio.h>

int main()
{
    char ch;
    int conditon = 0;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch == '"')
        {
            if (conditon == 0)
            {
                printf("``");
                conditon = 1;
            }
            else
            {
                printf("''");
                conditon = 0;
            }
        }
        else
        {
            printf("%c", ch);
        }
    }

    return 0;
}