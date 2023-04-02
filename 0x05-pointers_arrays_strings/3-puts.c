#include"main.h"
#include <unistd.h>

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: a pointer to a string
 *
 * Return: void
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }

    write(1, "\n", 1);
}
