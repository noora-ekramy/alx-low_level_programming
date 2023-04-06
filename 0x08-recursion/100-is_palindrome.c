#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    len = _strlen_recursion(s);
    return (_palindrome_check(s, 0, len - 1));
}

/**
 * _strlen_recursion - finds the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    else
        return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_check - checks if a string is a palindrome using recursion
 * @s: the string to check
 * @start: the start index of the string
 * @end: the end index of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _palindrome_check(char *s, int start, int end)
{
    if (start >= end)
        return (1);

    if (s[start] != s[end])
        return (0);

    return (_palindrome_check(s, start + 1, end - 1));
}
