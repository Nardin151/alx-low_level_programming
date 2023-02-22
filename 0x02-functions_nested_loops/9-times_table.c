#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0 = Success
 **/
void times_table(void)
{
int x = 0;
int y = 0;
int n = 0;
while (x <= 9)
{
while (y < 9)
{
int m = x * y;
_putchar(m + '0');
putchar(',');
putchar(' ');
y++;
}
n = 9 * x;
putchar(n);
putchar('\n');
x++;
}
}
