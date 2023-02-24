#include <stdio.h>
#include "main.h"
/**
 * print_triangle - a function that prints a triangle,
 * followed by a new line.
 * @size: the height of the triangle
 **/
void print_triangle(int size)
{
int rows = 1;
int whitespace = 1;
int hash = 1;
while (rows < size)
{
while (whitespace <= size - rows - 1)
{
_putchar(' ');
whitespace++;
}
whitespace = 1;
while (hash <= rows)
{
_putchar('#');
hash++;
}
hash = 1;
rows++;
_putchar('\n');
}
if (size < rows)
_putchar('\n');
}
