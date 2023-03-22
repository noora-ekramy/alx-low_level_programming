#include"main.h"
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 *
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i < 98; i++)
{
print_number(i);
_putchar(',');
_putchar(' ');
}
}
else
{
for (i = n; i > 98; i--)
{
print_number(i);
_putchar(',');
_putchar(' ');
}
}
print_number(98);
_putchar('\n');
}
