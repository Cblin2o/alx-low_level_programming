#include "main.h"
/**
* print_number - prints an integer
*@n:integer to be printed
*
*/
#include <stdio.h>

void print_number(int n)
{
    int sign = 1; /* variable to store the sign of n */
    int power = 1; /* variable to store the power of 10 */
    int digit; /* variable to store each digit of n */

    if (n < 0) /* if n is negative, change sign to -1 and make n positive */
    {
        sign = -1;
        n = -n;
    }

    while (n / power >= 10) /* find the highest power of 10 that is less than or equal to n */
    {
        power *= 10;
    }

    if (sign == -1) /* if n was negative, print a minus sign */
    {
        _putchar('-');
    }

    while (power > 0) /* loop through each digit of n from left to right */
    {
        digit = n / power; /* get the current digit by dividing n by power */
        _putchar(digit + '0'); /* convert the digit to a character and print it */
        n = n % power; /* update n by removing the current digit */
        power = power / 10; /* reduce power by a factor of 10 */
    }
}

