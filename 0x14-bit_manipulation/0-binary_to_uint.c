#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	ans = 0;
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			ans <<= 1;
			ans += (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (ans);
}
