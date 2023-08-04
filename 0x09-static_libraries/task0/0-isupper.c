/* islower.c */

#include "main.h"

/**
 * _isupper - Checks if a character
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _isupper(int c)
{
return (c >= 'a' && c <= 'z');
}
