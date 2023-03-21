#include <stdio.h>
/**
 * main - Makes the sum of two numbers
 *
 * Return: 0
 */
int main(void)
{
for (int i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
