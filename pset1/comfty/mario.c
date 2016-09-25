// pset1 mario.c more comfortable
#include <stdio.h>
#include <cs50.h>

void drawPyramid(int height);
void drawSpaces(int n);
void drawHashes(int n);

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

    for (int i = 0;i < height; i++){
        drawSpaces(height - i - 1);
        drawHashes(i + 1);

        printf("  ");

        drawHashes(i + 1);
        drawSpaces(height - i - 1);

        printf("\n");
    }
}

void drawSpaces(int n){
    for (int j = 0; j < n; j++){
         printf(" ");
    }
                                      
}

void drawHashes(int n){
    for (int k = 0; k < n; k++){
        printf("#");
    }
}
