#include <stdio.h>
/*
 * Char in C
 * Char represent a single character in single qoutes ('')
 * char cam also hold the interger ASCII value of a character
 * when using char to represent Alpha letters a-z / A-Z use the format specifier %d
 * But when char is to be used on represent the ASCII integer value of a character the format specifier should be %c

*/
int main(void)
{
    char alpha='D';

    printf("%d\n", alpha); // result => 68

    char ascii=69;
    printf("%c\n", ascii); // result => E
    return (0);
}
