#include"main.h"
/**
 * _memcpy - copies n bytes from memory
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
