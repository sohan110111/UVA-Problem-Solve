#include <stdio.h>

int main()
{
    int t, t2, i, max = 0, min = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &t2);
        int array[t2];
        for (i = 0; i < t2; i++)
        {
            scanf("%d", &array[i]);
        }
        max = array[0];
        min = array[0];
        for (i = 0; i < t2; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
            else if (array[i] < min)
            {
                min = array[i];
            }
        }
        printf("%d\n", (max - min) * 2);
        max = 0;
        min = 0;
    }
}