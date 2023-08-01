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
		char *start = haystack;
		char *pattern = needle;

		while (*pattern && *haystack && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (*pattern == '\0')
			return start;

		haystack = start + 1;
	}

	return NULL;
}
