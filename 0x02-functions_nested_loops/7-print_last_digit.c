#include"main.h"
/**
 * print_last_digit - Prints the last digit
 *
 * @n: The number to be processed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

if (n < 0)
n = -n;
if (last_digit < 0)
last_digit = -last_digit;
last_digit = n % 10;
_putchar(last_digit + '0');

return (last_digit);
}
