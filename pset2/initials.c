/* Marian Oprisan
 * cs50 2016
 * initials.c, more comfortable
 *
 * This program asks the user for their name and prints out their initials. */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){
    string name = get_string();
    char initials[6];
    int counter = 0;
    if (name[0] !=32){
        initials[0] = toupper(name[0]);
        counter++;
    }
    for (int i = 0, n = strlen(name); i < n; i++){
        if (name[i] == 32){
            if (name[i + 1] != 32){    
                initials[counter] = toupper(name[i + 1]);
                counter++;
            }
        }
    }

    printf("%s\n", initials);

    return 0;
}
