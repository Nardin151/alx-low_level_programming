#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 **/
void print_square(int size)
{
int a = 1;
int b = 1;
if (size > 0)
{
while (a <= size)
{
while (b <= size)
{
_putchar('#');
b++;
}
b = 1;
a++;
_putchar('\n');
}
}
else
_putchar('\n');
}
