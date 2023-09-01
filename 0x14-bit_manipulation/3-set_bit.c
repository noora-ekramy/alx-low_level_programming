#include "mian.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}

