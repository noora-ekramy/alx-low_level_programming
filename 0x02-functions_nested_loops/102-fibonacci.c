#include <stdio.h>
#include"main.h"
/**
 * print_fibonacci_sequence - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, separated by comma and space
 *
 * Return: void
 */
void print_fibonacci_sequence(void)
{
int i;
unsigned long long current, previous, temp;

current = 2;
previous = 1;

printf("%llu, %llu", previous, current);

for (i = 3; i <= 50; i++)
{
temp = current;
current = previous + current;
previous = temp;

printf(", %llu", current);
}

printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_fibonacci_sequence();
return (0);
}
