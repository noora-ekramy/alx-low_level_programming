#include"main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 *
 * @n: starting number to print from
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (int i = n; i >= 98; i--)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}

