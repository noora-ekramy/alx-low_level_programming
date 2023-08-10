#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_error_exit - Prints "Error" and exits with status 98.
 */
void print_error_exit(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_error_exit();
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    // Check if num1 and num2 are composed of digits
    for (int i = 0; num1_str[i]; i++)
    {
        if (num1_str[i] < '0' || num1_str[i] > '9')
        {
            print_error_exit();
        }
    }

    for (int i = 0; num2_str[i]; i++)
    {
        if (num2_str[i] < '0' || num2_str[i] > '9')
        {
            print_error_exit();
        }
    }

    // Convert num1 and num2 to integers
    unsigned long long num1 = strtoull(num1_str, NULL, 10);
    unsigned long long num2 = strtoull(num2_str, NULL, 10);

    // Perform multiplication
    unsigned long long result = num1 * num2;

    // Print the result
    printf("%llu\n", result);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/**
 * print_error_exit - Prints "Error" and exits with status 98.
 */
void print_error_exit(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - Entry point. Multiplies two positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_error_exit();
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    // Check if num1 and num2 are composed of digits
    for (int i = 0; num1_str[i]; i++)
    {
        if (num1_str[i] < '0' || num1_str[i] > '9')
        {
            print_error_exit();
        }
    }

    for (int i = 0; num2_str[i]; i++)
    {
        if (num2_str[i] < '0' || num2_str[i] > '9')
        {
            print_error_exit();
        }
    }

    // Convert num1 and num2 to integers
    unsigned long long num1 = strtoull(num1_str, NULL, 10);
    unsigned long long num2 = strtoull(num2_str, NULL, 10);

    // Perform multiplication
    unsigned long long result = num1 * num2;

    // Print the result
    printf("%llu\n", result);

    return 0;
}

