#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int testCases;
    char string[1000];
    int i = 1;
    scanf("%d", &testCases);
    while(1) {
        scanf("%s", string);
        if(strlen(string) == 3) {
            if(string[0] == 'o' && string[1] == 'n'){
                printf("1\n");
            } else if(string[0] == 'o' && string[2] == 'e'){
                printf("1\n");
            } else if(string[1] == 'n' && string[2] == 'e'){
                printf("1\n");
            } else {
                printf("2\n");
            }
        }else {
            printf("3\n");
        }
        if(i==testCases){
            break;
        }
        i++;
    }
    return 0;
}