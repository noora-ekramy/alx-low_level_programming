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
unsigned long int next;
printf("%lu", a);
printf(", ");
printf("%lu", b);
printf(", ");
for (i = 3; i <= 50; i++)
{
next = a;
a = b;
b = next + b;
printf("%lu", b);
if (i != 50)
{
printf(", ");
}
else
{
printf(" \n");
}
}
return (0);
}
