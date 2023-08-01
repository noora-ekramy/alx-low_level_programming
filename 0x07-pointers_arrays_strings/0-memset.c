#include"main.h"
/**
 * _memset - fills the first n bytes
 * @s: pointer to memory area to fill
 * @b: byte to fill memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
