/* Marian Oprisan
 * credit.c cs50 2016 comfortable
 * The program takes a number as input and checks if it is a valid Visa, Mastercard or American Express card number
 * It prints what type of card it is or INVALID if the number is invalid.
*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>

// prototypes for the verify and validate functions
bool verify(string serial);
string validate(string serial);

int main(void){
    // this var will store the number as a string
    char serial[17];

    printf("Number: ");
    // I use the long long datatype as a credit card number can get big
    long long number = get_long_long();

    // putting the digits of number inside of string serial
    sprintf(serial, "%lld", number);

    if (verify(serial)){
        printf("%s\n",validate(serial));
    }
    else{
        printf("INVALID\n");
    }

    return 0;
}

/*This function verifies if the number entered could be a valid card serial
 * i.e. its length is 13, 15 or 16 */

bool verify(string serial){
    if (strlen(serial) == 15 || strlen(serial) == 13 || strlen(serial) == 16){
        return true;
    }
    
    return false;
}

/*Validate is a functions that uses the serial's mathematical properties to check if it is actually valid
 * and also decides whose company it belongs to */

string validate(string serial){
    int sum = 0;
    int temp = 0;
    char digit;
    int k, l;
    if (strlen(serial) % 2 == 0){
        k = 0;
        l = 1;
    }
    else{
        k = 1;
        l = 0;
    }
    for (int i = k, n = strlen(serial); i < n; i += 2){
        digit = serial[i];
        temp = atoi(&digit) * 2;
        if (temp >= 10){
            char temp2[15];
            sprintf(temp2, "%d", temp);
            digit = temp2[0];
            sum += atoi(&digit);
            digit = temp2[1];
            sum += atoi(&digit);
        }
        else{
            sum += temp;
        }
    }

    for (int j = l, m = strlen(serial); j < m; j += 2){
        digit = serial[j];
        sum += atoi(&digit);
    }
    if (sum % 10 == 0){
        if (serial[0] == '4'){
            return ("VISA");
        }
        else if(serial[0] == '3'){
            if (serial [1] == '4' || serial[1] == '7'){
                return("AMEX");
            }
            else{
                return ("INVALID");
            }
        }
        else if(serial[0] == '5'){
            if (serial[1] == '1' || serial[1] == '2' || serial[1] == '3' || serial[1] == '4' || serial[1] == '5'){
                return ("MASTERCARD");
            }
            else{
                return ("INVALID");
            }
        }
        else{
            return ("INVALID");
        }
    }

    return ("INVALID");
}
