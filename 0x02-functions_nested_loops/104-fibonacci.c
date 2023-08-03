#include <stdio.h>
/**
 * main - function of the program.
 * This function is the entry point of the program and is called by the
 * system when the program is executed. It prints the "_putchar" string
 * by a new line and returns 0 to indicate successful execution.
 *
 * Return:  0 to indicate successful execution.
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2;
	unsigned long int c;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;

	
	printf("%lu", a);
	printf(", ");
	printf("%lu", b);
	printf(", ");
	for (i = 3; i <= 92; i++)
	{
		c = a + b;
		printf("%lu", c);
		if (i != 98)
		{
			printf(", ");
		}
		b = a;
		a = c;
	}
	fib1_half1 = a / 10000000000;
	fib2_half1 = b / 10000000000;
	fib1_half2 = a % 10000000000;
	fib2_half2 = b % 10000000000;
	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");

	return (0);
}
