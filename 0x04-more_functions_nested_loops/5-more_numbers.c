#include <stdio.h>
#include "main.h"
/**
 * function that prints 10 times the numbers, from 0 to 1
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
_putchar(c + '0');
c++;
}
_putchar(10);
c = 0;
a++;
}
}
