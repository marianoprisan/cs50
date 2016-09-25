#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("x is ");
    float x = get_float();

    printf("y is ");
    float y = get_float();
    //%.1f will display only one digit after the decimal
    printf("%.1f plus %.1f is %.1f\n", x, y, x + y);
    printf("%.1f minus %.1f is %.1f\n", x, y, x - y);
    printf("%.1f times %.1f is %.1f\n", x, y, x * y);
    printf("%.1f divided by %.1f is %.1f\n", x, y, x / y);
}
