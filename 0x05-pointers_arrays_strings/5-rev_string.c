#include"main.h"
/**
 * rev_string - reverses a string
 * @s: a pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
int i, j, len;
char temp;

len = 0;

while (s[len] != '\0')
{
len++;
}

j = len - 1;

for (i = 0; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
