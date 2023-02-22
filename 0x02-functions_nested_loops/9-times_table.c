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
if ((x * y) >= 10)
{
n = (((x * y) - ((x * y) % 10)) / 10) % 10 + 48;
putchar(n);
n = (x * y) % 10 + 48;
putchar(n);
}
else
{
putchar(' ');
n = (x * y) % 10 + 48;
putchar(n);
}
putchar(',');
putchar(' ');
y++;
}
n = (9 * x);
if (n >= 10)
{
n = (((9 * x) - ((9 * x) % 10)) / 10) % 10 + 48;
putchar(n);
n = (9 * x) % 10 + 48;
putchar(n);
}
else
{
n = (9 * x) % 10 + 48;
putchar(n);
}
putchar('\n');
y = 0;
x++;
}
}
