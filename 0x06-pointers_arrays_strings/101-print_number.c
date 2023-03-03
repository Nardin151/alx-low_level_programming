#include <stdio.h>
#include "main.h"
/**
 * print_number - a function that prints an integer.
 * @n: number
 **/
void print_number(int n)
{
int len = 1;
int power_of_ten = 10;
int count;
int temp = n ;
if (n < 0)
{
_putchar('-');
n = -(n);
}
while (temp / 10 != 0)
{
len++;
temp /= 10;
power_of_ten *= 10;
}
for (count = 0 ; count < len ; count++)
{
temp = (n % power_of_ten) / (power_of_ten / 10);
_putchar(temp + 48);
power_of_ten /= 10;
}
}
