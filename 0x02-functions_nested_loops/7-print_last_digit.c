#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: 0 = Success
 * @x: the entire number
 **/
int print_last_digit(int x)
{
if (x > 0)
{
_putchar((x % 10) + '0');
return (x % 10);
}
else
{
_putchar(((x * -1) % 10) + '0');
return ((x*-1) % 10);
}
}

