#include "main.h"

/**
 * sqrt_recursion_helper - helper function to find the square root of a number
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int sqrt_recursion_helper(int n, int guess)
{
int new_guess;

if (n == 0)
{
return (0);
}
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
new_guess = guess + 1;

return (sqrt_recursion_helper(n, new_guess));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqrt_recursion_helper(n, 1));
}
