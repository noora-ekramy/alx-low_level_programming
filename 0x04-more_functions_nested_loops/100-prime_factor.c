#include <stdio.h>
#include"main.h"
/**
 * largest_prime_factor - finds and
 * @n: the number to find the
 *
 * Return: void
 */
void largest_prime_factor(unsigned long n)
{
unsigned long i;

for (i = 2; i <= n; i++)
{
while (n % i == 0)
{
n /= i;
}
}

printf("%lu\n", i - 1);
}

int main(void)
{
unsigned long n = 612852475143;

largest_prime_factor(n);

return (0);
}
