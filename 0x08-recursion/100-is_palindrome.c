#include "main.h"
#include <stdio.h>
int check_palindrome(char *s, int len, int i);
/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: A pointer to the string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = 0;

while (*(s + len) != '\0')
len++;

return (check_palindrome(s, len - 1, 0));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively.
 *
 * @s: A pointer to the string to check.
 * @len: The length of the string.
 * @i: The index of the character to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int len, int i)
{
if (i > len / 2)
return (1);

if (*(s + i) == *(s + len - i))
return (check_palindrome(s, len, i + 1));

return (0);
}
