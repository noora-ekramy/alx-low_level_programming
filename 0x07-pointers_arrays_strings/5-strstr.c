#include "main.h"
/**
 * _strstr - finds the first occurrence of a substring in a string.
 * @haystack: source string
 * @needle: searching substring
 *
 * Return: pointer to the first occurrence of the substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle)) || !*needle)
		{
			return haystack;
		}
		else
		{
			haystack++;
		}
	}
	return NULL;
}

/**
 * coincidence - checks if a string b is a substring of string a.
 * @a: source string
 * @b: substring to be searched
 *
 * Return: 1 if there is a coincidence (substring found), otherwise 0.
 */
int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return 1;
	else
		return 0;
}
