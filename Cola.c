#include <stdio.h>

int main()
{

    int n, output = 0, i;
    while (scanf("%d", &n) != EOF)
    {
        for(i = 1; i<=n; i++) {
          if(i % 2 != 0) {
            output += 1;
          }else {
            output += 2;
          }
        }
      printf("%d\n", output);
      output = 0;
    }

    return 0;
}