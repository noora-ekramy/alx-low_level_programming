#include "main.h"
/**
 * _print_rev_recursion : lol
 * @s: Pointer to the
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
