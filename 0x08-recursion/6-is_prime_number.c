#include "main.h"
int is_prime_helper(int n, int div);
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
    if (n < 2)
        return 0;
    return is_prime_helper(n, n / 2);
}

/**
 * is_prime_helper - recursively checks if a number is prime
 * @n: number to check
 * @div: potential divisor
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_helper(int n, int div)
{
    if (div == 1)
        return 1;
    if (n % div == 0)
        return 0;
    return is_prime_helper(n, div - 1);
}

