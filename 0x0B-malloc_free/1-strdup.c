#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *nr;
	unsigned int l, i;

	/* check is str is null */
	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
		l++;
	nr = malloc(sizeof(char) * (l + 1));
	if (nr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
		nr[i] = str[i];
	nr[l] = '\0';
	return (nr);
}
