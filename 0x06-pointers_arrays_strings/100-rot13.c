#include"main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
int i, j;
char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i]; i++)
{
for (j = 0; alpha[j]; j++)
{
if (s[i] == alpha[j])
{
s[i] = rot13[j];
break;
}
}
}

return (s);
}
