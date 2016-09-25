#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("Enter yes(y) or no(n): ");
    char answer = get_char();
    if (answer == 'y' || answer == 'Y'){
        printf("Yes\n");
    }
    else if (answer == 'n' || answer == 'N'){
        printf("No\n");
    }
    else{
        printf("Error\n");
    }
}
