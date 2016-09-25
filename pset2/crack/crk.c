/* cs50 2016 crack.c
 * This program cracks a password encrypted using C's DES-based crypt function */

#define _XOPEN_SOURCE
#include <stdio.h>
#include <crypt.h>
#include <string.h>

#include <unistd.h>

int main(int argc, char* argv[]){
    if (argc != 3){
        printf("Usage: ./crack <hashed_password> <similar_unhashed>\n");
        return 1;
    }

    const char* salt = "50";

    const char* similar = argv[2];
    
    char* hash = crypt(similar, salt); 
    
    printf("The word %s is hashed as: %s and we compare it to: %s\n", similar, hash, argv[1]);
    

    return 0;
}
