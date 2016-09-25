#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main(void){
    // ask user for input
    string s = get_string();

    // check if get_string returned a string
    if (s != NULL){
        // iterating over chars in s
        for (int i = 0, n = strlen(s); i < n; i++){
            printf("%c\n", s[i]);
        }
    }

    printf("%ld characters\n", strlen(s));
}
