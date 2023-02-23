#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function that prints 10 times
 * the numbers, from 0 to 1
 * 4, followed by a new line.
 * Return: 0 = success
 **/
void more_numbers(void)
{
int a = 0;
int c = 0;
while (a <= 9)
{
while (c <= 14)
{
if (c >= 10)
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
c++;
}
_putchar(10);
c = 0;
a++;
}
}
