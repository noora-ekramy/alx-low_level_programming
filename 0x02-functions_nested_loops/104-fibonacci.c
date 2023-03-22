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
long a = 1, b = 2;
long next;
printf("%d", a);
printf(", ");   
printf("%d", b);
printf(", ");       
for (i = 1; i <= 98-2; i++)
{
next = a;
a = b;
b = next + b;
printf("%d", b);
if (i != 98-1) 
{
printf(", ");
} else {
printf("\n");
}
}
    return (0);
}
