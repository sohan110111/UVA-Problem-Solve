#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int testCases = 1;
    while (scanf("%s", string)){
        if (strcmp(string, "*")==0)
        {
            break;
        } else if(strcmp(string, "Hajj")==0) {
            printf("Case %d: Hajj-e-Akbar\n", testCases);
        }else
        {
            printf("Case %d: Hajj-e-Asghar\n", testCases);
        }
        testCases++;
        
    }

    return 0;
}