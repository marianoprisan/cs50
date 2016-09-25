#include <cs50.h>
#include <stdio.h>
 
int main(void){
    printf("Enter yes(y) or no(n): ");
    char answer = get_char();

    switch(answer){
        case 'y':
        case 'Y':
            printf("You entered yes.\n");
            break;
        case 'n':
        case 'N':
            printf("You entered no.\n");
            break;
        default:
            printf("Error\n");
            break;
    }
}   
