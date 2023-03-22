#include <stdio.h>
#include"main.h"
/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of all multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);

return (0);
}
