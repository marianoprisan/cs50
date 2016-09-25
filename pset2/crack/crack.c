/* cs50 2016 crack.c
 * This program cracks a password encrypted using C's DES-based crypt function 
 * I need to code a word generator that uses both lowercase and uppercase characters */

#define _XOPEN_SOURCE
#include <stdio.h>
#include <crypt.h>
#include <string.h>

#include <unistd.h>

int main(int argc, char* argv[]){
    if (argc != 2){
        printf("Usage: ./crack <hashed_password>\n");
        return 1;
    }

    const char* salt = "50";
    const char* key = argv[1];

    // I will load common words, hash them and then compare them with the encrypted passwords
    // this is brute force
    FILE *f;
    f = fopen("/home/ubuntu/workspace/pset2/crack/wordlist.txt", "r");
    if (f == NULL){
        printf("Error loading wordlist.\n");
        return 1;
    }
    else{
        printf("Wordlist loaded.\n");
    }
    //here word is char[] and not char* because crypt would give an error otherwise
    char word[5];
    int counter = 0;
    while (!feof(f)){ 
        fscanf(f, "%s", word);
        char* hash = crypt(word, salt);
        counter ++;
        //printf("The word %s is hashed as: %s\n", word, hash);
        if(strcmp(hash, key) == 0){
            printf("%s\n", word);
            fclose(f);
            return 0;
        }
    }
    
    printf("Searched: %d words.\n", counter);

    return 0;
}
