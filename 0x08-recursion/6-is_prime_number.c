#include "main.h"
/**
 * is_prime_number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}

/**
 * check_prime
 * @n: the number to check
 * @i: the divisor to check against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}

