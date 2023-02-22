#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: 0 = Success
 * @x: the entire number
 **/
int print_last_digit(int x)
{
int y = x % 10;
_putchar(y);
return (x % 10);
}
