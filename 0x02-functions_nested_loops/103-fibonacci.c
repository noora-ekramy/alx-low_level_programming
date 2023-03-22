#include <stdio.h>
/**
 * main - Calculates the sum of even-valued terms i
 * the Fibonacci sequence whose
 * values do not exceed 4,000,000.
 *
 * Return : the sum.
 */
int main(void)
{
int current = 2;
int previous = 1;
int sum = 0;
int temp;

while (current < 4000000)
{
if (current % 2 == 0)
{
sum += current;
}
temp = current;
current += previous;
previous = temp;
}
printf("%d\n", sum);
return (0);
}
