#include <stdio.h>
#include <string.h>

int main() {

    char string[1000];
    int Case = 1;
    while (scanf("%s", string)) 
    {
        if (strcmp(string, "#") == 0){
            break;
        } else if(strcmp(string, "HELLO") == 0) {
            printf("Case %d: ENGLISH\n", Case);
        } else if(strcmp(string, "HOLA") == 0) {
            printf("Case %d: SPANISH\n", Case);
        } else if(strcmp(string, "HALLO") == 0) {
            printf("Case %d: GERMAN\n", Case);
        } else if(strcmp(string, "BONJOUR") == 0) {
            printf("Case %d: FRENCH\n", Case);
        } else if(strcmp(string, "CIAO") == 0) {
            printf("Case %d: ITALIAN\n", Case);
        } else if(strcmp(string, "ZDRAVSTVUJTE") == 0) {
            printf("Case %d: RUSSIAN\n", Case);
        } else {
            printf("Case %d: UNKNOWN\n", Case);
        }
        Case++;
    }
    return 0;
}