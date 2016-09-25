// pset1 greedy.c
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void){
    float change = 0.0;
    printf("O hai! ");
    do{
        printf("How much change is owed?\n");
        change = get_float();
    }
    while (change < 0);
    // here I turn floating point number into number of cents it represents
    int cents = round(change * 100);
    
    int coins = 0;
    do{
        if (cents >= 25){
            cents -= 25;
            coins++;
        }
        else if(cents >= 10){
            cents -= 10;
            coins++;
        }
        else if(cents >= 5){
            cents -= 5;
            coins++;
        }
        else{
            coins += cents;
            cents = 0;
        }
    }
    while (cents > 0);

    printf("%d\n", coins);
}
