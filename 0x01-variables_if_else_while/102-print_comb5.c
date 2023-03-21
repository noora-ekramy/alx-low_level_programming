#include <stdio.h>
/**
 * main - Makes the sum of two numbers
 *
 * Return: 1
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
if (i == j) 
{
continue;
}
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i < 99 || j < 99) {
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
