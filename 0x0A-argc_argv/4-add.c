#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * is_positive_number - Checks if a string
 * @str: The string to check
 *
 * Return: 1 if str is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (!isdigit(str[i]))
return (0);
i++;
}

return (1);
}

/**
 * main - Entry point. Adds positive numbers passed as arguments.
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if the program runs successfully, 1 otherwise
 */
int main(int argc, char **argv)
{
int sum = 0, i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
