#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical, otherwise 0
 * @s1: the first string to compare
 * @s2: the second string to compare (can contain the special character *)
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
/* check if s2 is empty */
if (*s2 == '\0')
return (*s1 == '\0');

/* check if s2 starts with * */
if (*s2 == '*')
{
/* if s2 ends with *, match immediately */
if (*(s2 + 1) == '\0')
return (1);

/* if s2 does not end with *, recursively check each character match after * */
if (wildcmp(s1, s2 + 1))
return (1);

/* recursively check each character match after * and s1 advances */
return (*s1 != '\0' && wildcmp(s1 + 1, s2));
}

/* check if s1 and s2 have the same first character, or s2 has a ? */
if (*s1 == *s2 || *s2 == '?')
{
/* recursively check each character match */
return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
}

/* if no match, return 0 */
return (0);
}
