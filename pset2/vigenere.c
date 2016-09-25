/* Marian Oprisan
 * cs50 2016 vigenere.c
 *
 * This program accepts as command-line argument a keyword. It will later use the keyword to encrypt a text that the user provides. */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    // checking if user provided one command-line argument
    if (argc != 2){
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    string key = argv[1];

    // checking if key is valid
    // and also making it lowercase
    int len = strlen(key);
    for (int i = 0; i < len; i++){
        if (isalpha(key[i])){
            key[i] = tolower(key[i]);
            continue;
        }
        else{
            printf("The key you provided is invalid!\n");
            return 1;
        }
    }

    // getting the text to cipher
    printf("plaintext: ");
    string text = get_string();
    
    // this counter will help us wrap around our key
    int counter = len;
    
    printf("ciphertext: ");

    // iterating over the plaintext and printing ciphered characters
    for (int i = 0, n = strlen(text); i < n; i++){
        if (isalpha(text[i])){
            if islower(text[i]){
                printf("%c", (((text[i] - 97) + (key[counter % len] - 97)) % 26) + 97);
                counter++;
            }
            else{
                printf("%c", (((text[i] - 65) + (key[counter % len] - 97)) % 26) + 65);
                counter++;
            }
        }
        else{
            printf("%c", text[i]); 
        }
        
    }

    printf("\n");

    return 0;
}
