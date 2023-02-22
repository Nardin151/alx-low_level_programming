#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followe
 * by a new line
 * Return: 0 = Success
 * @n: a number that we will start with
 **/
void print_to_98(int n)
{
if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
else
{
int i = 0;
while (i > 97)
{
printf("%d, ", n);
i++;
}
}
printf(98);
}
