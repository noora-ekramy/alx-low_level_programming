#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: The number of arguments
 * @argv: An array containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
    printf("%d\n", argc - 1);
    return (0);
}
