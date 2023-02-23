#include <stdio.h>
#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: number of diag lines
 **/
void print_diagonal(int n)
{
int a = 0;
int b = 0;
if (n > 0)
{	
while (b < n)
{
while (a <= b - 1)
{
_putchar(' ');
a++;
}
a = 0;
_putchar('\\');
_putchar('\n');
b++;
}
_putchar('\n');
}
else
_putchar('\n');
}
