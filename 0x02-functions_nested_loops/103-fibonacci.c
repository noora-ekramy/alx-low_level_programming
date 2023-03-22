/**
 * Calculates the sum of even-valued terms i
 * the Fibonacci sequence whose
 * values do not exceed 4,000,000.
 *
 * Returns the sum.
 */
#include <stdio.h>

int main()
{
int current = 2;
int previous = 1;
int sum = 0;

while (current < 4000000)
{
if (current % 2 == 0)
{
sum += current;
}
int temp;
temp = current;
current += previous;
previous = temp;
}
printf("%d\n", sum);
return (0);
}
