#include <stdio.h>
/**
 * main - Makes the sum of two numbers
 *
 * Return: 0
 */
int main(void)
{
char digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}
digit = 'a';
while (digit <= 'f')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
