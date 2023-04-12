#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main
 * @size: input
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
		char *arr;
		unsigned int i;

		if (!size )
			return (NULL);
		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
}
