#include <stdio.h>
#include "main.h"
/**
 * print_line - a function that draws a straight 
 * line in the terminal.
 * @n: number of _
 * Retrun: 0 = Success
 **/
void print_line(int n)
{
int a = 1;
while (a <= n)
{
_putchar('_');
a++;
}
_putchar(10);
}
