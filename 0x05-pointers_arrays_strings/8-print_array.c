#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * of integers, followed by a new line
 * @a : array name
 * @n : array size
 **/
void print_array(int *a, int n)
{
unsigned long int counter;
if (n == sizeof(a))
{
for (counter = 0 ; counter < (sizeof(a) / 4) - 1 ; counter++)
{
printf("%d, ", a[counter]);
}
printf("%d", a[n - 1]);
}
printf("\n");
}
