// pset1 mario.c
#include <stdio.h>
#include <cs50.h>

void drawPyramid(int height);

int main (void){
    int height = 0;
    do{
        printf("height: ");
        height = get_int();
    }
    while(height < 0 || height > 23);

    drawPyramid(height);
}

void drawPyramid(int height){
    int spaces = 0;
    int hashes = 0;

    for (int i = 0;i < height; i++){
        spaces = height - (i + 1);
        hashes = i + 2;
        for (int j = 0; j < spaces; j++){
            printf(" ");
        }
        for (int k = 0; k < hashes; k++){
            printf("#");
        }

        printf("\n");
    }
}
