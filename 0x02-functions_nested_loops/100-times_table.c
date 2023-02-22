#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number
 * Return: 0 = Success
 **/
void print_times_table(int n)
{
int counter_1 = 0;
int counter_2 = 0;
int first_digit = 0;
int second_digit = 0;
int third_digit = 0;
int mult = 0;
while(counter_1 <= n)
{
while(counter_2 <= n)
{
mult = counter_1 * counter_2;
if (mult > 99)
{
first_digit = (mult / 100) + 48;
putchar(first_digit);
second_digit = (mult / 10) % 10 + 48;
putchar(second_digit);
third_digit = mult % 10 + 48;
putchar(third_digit);
}
else if (mult >=10)
{
if (counter_1 != 0)
putchar(' ');
second_digit = (mult / 10) % 10 + 48;
putchar(second_digit);
third_digit = mult % 10 + 48;
putchar(third_digit);
}
else
{
if (counter_1 != 0)
{
putchar(' ');
putchar(' ');
}
third_digit = mult % 10 + 48;
putchar(third_digit);
}
if (counter_2 != counter_1)
{
putchar(',');
putchar(' ');
}
counter_2++;
}
putchar('\n');
counter_2 = 0;
counter_1++;
}
}
