#include"main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: a pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
int len = 0;

while (s[len] != '\0')
{
len++;
}

for (i = len - 1; i >= 0; i--)
{
write(1, &s[i], 1);
}

write(1, "\n", 1);
}
