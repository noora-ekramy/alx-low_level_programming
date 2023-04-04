#include"main.h"
/**
 * _strchr - locate a character
 * @s: pointer to the string
 * @c: character to locate
 *
 * Return: pointer to the
 * or NULL if the character
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
