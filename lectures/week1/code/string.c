#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("Enter your name: ");
    string name = get_string();
    printf("Hello, %s!\n", name);
}
