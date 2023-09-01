#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	if (n % 2 == 1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
