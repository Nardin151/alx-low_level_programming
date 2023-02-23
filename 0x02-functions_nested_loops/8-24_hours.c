#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -  prints every minute of the day 
 * of Jack Bauer, starting from 00:00 to 23:59.
 * Return: 0 = success
 **/
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int digit = 0;
while (hours <= 23)
{
while (minutes <= 59)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
minutes++;
}
hours++;
}
return (0);
}
