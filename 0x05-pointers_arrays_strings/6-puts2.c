#include"main.h"
#include <unistd.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: a pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
write(1, &str[i], 1);
i += 2;
}

write(1, "\n", 1);
}
