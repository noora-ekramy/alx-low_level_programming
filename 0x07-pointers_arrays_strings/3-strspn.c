#include"main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: the bytes to accept
 *
 * Return: the number of bytes in the initial segment of s consisting
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (!accept[j])
break;
}
return (count);
}
