#include "main.h"
/**
 * Len - get the length of a string
 * @s: String
 * Return: Length of a string
 **/
int Len(char *s)
{
if (s[0] == '\0')
return (0);
else
{
s++;
return (1 + Len(s));
}
}
/**
 * rev - print a string in reverse
 * @s: the String that we want to print in reverse
 * @n: Length of S
 **/
void rev(char *s, int n)
{
if (n == 0)
{
_putchar('\n');
_putchar(s[0]);
}
else
{
_putchar(s[n]);
rev(s, n - 1);
}
}
/**
 * _print_rev_recursion - print a string in reverse
 * @s: the String that we want to print in reverse
 **/
void _print_rev_recursion(char *s)
{
if (Len(s) != 0)
rev(s, Len(s));
}
