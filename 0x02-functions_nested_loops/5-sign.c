#include <stdio.h>
#include "main.h"
/**
 * main - Enrty point
 * Return: 0 = success
 **/
int print_sign(int n);
int print_sign(int n)
{
if(n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
