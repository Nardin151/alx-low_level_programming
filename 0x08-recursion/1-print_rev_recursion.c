#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string of chars
 **/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
