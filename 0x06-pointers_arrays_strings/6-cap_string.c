#include"main.h"
/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *s)
{
int i;

/* Capitalize the first letter of the string */
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;

/* Capitalize the first letter of each word */
for (i = 1; s[i] != '\0'; i++)
{
if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
|| s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] -= 32;
}
}

return (s);
}
