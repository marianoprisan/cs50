#include <cs50.h>
#include <stdio.h>

int main(void){
    printf("Enter a value for i: ");
    int i = get_int();
    if (i < 0){
        printf("i is negative\n");
    }
    else if(i > 0){
        printf("i is positive\n");
    }
    else{
        printf("i is 0\n");
    }
}
