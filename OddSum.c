#include <stdio.h>

int main()
{

    int testCase, num1, num2, sum = 0;
    scanf("%d", &testCase);
    int temp = testCase;
    while (testCase--)
    {
        scanf("%d\n%d", &num1, &num2);
        if (num1 > num2)
        {
            int temp2 = num1;
            num1 = num2;
            num2 = temp2;
        }
        while (num1 <= num2)
        {
            if (num1 % 2 != 0)
            {
                sum += num1;
            }
            num1++;
        }
        printf("Case %d: %d\n", temp - testCase, sum);
        sum = 0;
    }

    return 0;
}