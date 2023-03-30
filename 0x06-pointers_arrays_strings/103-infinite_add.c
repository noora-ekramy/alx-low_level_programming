/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result if successful, 0 if result can't be stored in buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, carry, sum;

/* Find length of n1 and n2 */
for (i = 0; n1[i] != '\0'; i++)
;
for (j = 0; n2[j] != '\0'; j++)
;

/* Check if result can be stored in buffer */
if (i >= size_r || j >= size_r || size_r == 0)
return (0);

/* Add digits from right to left */
carry = 0;
for (i -= 1, j -= 1, k = 0; i >= 0 || j >= 0 || carry > 0; i--, j--, k++)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[k] = (sum % 10) + '0';
}

/* Reverse the result string */
for (i = 0, j = k - 1; i < j; i++, j--)
{
sum = r[i];
r[i] = r[j];
r[j] = sum;
}

/* Add null terminator */
r[k] = '\0';

return (r);
}
