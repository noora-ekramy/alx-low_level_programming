#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string
 * @needle: The substring to be located.
 * Return: If the substring is located
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int ind;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		ind = 0;

		if (haystack[ind] == needle[ind])
		{
			do {

				if (needle[ind + 1] == '\0')
					return (haystack);

				ind++;

			} while (haystack[ind] == needle[ind]);
		}

		haystack++;
	}

	return ('\0');
}
