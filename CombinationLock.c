/* #include <stdio.h>
#include <stdlib.h>
//#define fixedDegree 1080
//#define fixedCallibration 40

int main () {
    int array[4];

    while (1) {
        scanf ("%d%d%d%d", &array[0], &array[1], &array[2], &array[3]);
        if (array[0]+array[1]+array[2]+array[3] == 0)
        {
            break;
        } else {
            printf("%d\n", 1080+abs(abs(array[0]-array[1])-40)*9+abs(abs(array[1]-array[2])-40)*9+abs(abs(array[2]-array[3])-40)*9);
        }
    }

    return 0;
} */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[4], i, sum = 0;
    while (1)
    {
        for (i = 0; i < 4; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] == 0)
            {
                a[i] = 40;
            }
        }
        if (a[0] + a[1] + a[2] + a[3] == 160)
        {
            break;
        }
        // printf("%d\n", 1080+abs(abs(a[0]-a[1])-40)*9+abs(abs(a[1]-a[2])-40)*9+abs(abs(a[2]-a[3])-40)*9);
        if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
        {
            printf("%d\n", 1080);
        }
        else
        {
            if (a[0] > a[1] || a[0] == a[1])
            {
                sum = a[0] - a[1];
            }
            else
            {
                sum = 40 - abs(a[0] - a[1]); // a[0] + 40 - a[1];
            }
            if (a[1] < a[2] || a[1] == a[2])
            {
                sum += abs(a[1] - a[2]);
            }
            else
            {
                sum += 40 - abs(a[1] - a[2]); // a[1] + 40 - a[2];
            }
            if (a[2] > a[3] || a[2] == a[3])
            {
                sum += a[2] - a[3];
            }
            else
            {
                sum += 40 - abs(a[2] - a[3]); // a[2] + 40 - a[3];
            }
            printf("%d\n", 1080 + sum * 9);
            sum = 0;
        }
    }

    return 0;
}
