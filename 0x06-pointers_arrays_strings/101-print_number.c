#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
    int power, digit, is_negative;

    power = 1;
    is_negative = n < 0;
    if (is_negative)
        _putchar('-');
    while (n / power > 9 || n / power < -9)
        power *= 10;
    while (power > 0)
    {
        digit = (n / power) % 10;
        if (is_negative)
            _putchar(-digit + '0');
        else
            _putchar(digit + '0');
        power /= 10;
    }
}
