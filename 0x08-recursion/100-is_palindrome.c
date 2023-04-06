#include "main.h"
#include <stdio.h>
/**
 * str_len - Returns the length
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + str_len(s + 1));
}

/**
 * is_palindrome - Checks if a
 * @s: Pointer to the string.
 *
 * Return: 1 if the string is
 */
int is_palindrome(char *s)
{
int len = str_len(s);

if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
return (is_palindrome(s + 1));
else
return (0);
}

