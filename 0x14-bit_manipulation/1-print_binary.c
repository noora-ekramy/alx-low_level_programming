#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
	{
		print_binary(n / 2);
	}
	putchar('0' + (n % 2));
}
