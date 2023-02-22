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
int y = (x % 10) + 48;
_putchar(y);
return (x % 10);
}
else
int e = -x;
int r = (e % 10) + 48;
_putchar(r);
return(e % 10);
}
