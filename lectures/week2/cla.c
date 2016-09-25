#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    if (argc > 1){
        printf("Hello, %s\n", argv[1]);
    }
    else{
        printf("Hello world!\n");
    }

    printf("Printing the list of command-line arguments: \n");

    for (int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }

    printf("Printing every char of all command-line arguments: \n");

    for (int i = 0; i < argc; i++){

        for (int j = 0, n = strlen(argv[i]); j < n; j++){
            // printf j'th character in i'th string
            printf("%c\n", argv[i][j]);
        }
    }
}
