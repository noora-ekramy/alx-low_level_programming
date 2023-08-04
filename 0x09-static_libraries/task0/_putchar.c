/* _putchar.c */
#include "main.h"
/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, 1 is returned. On error
 * and errno is set appropriately.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
