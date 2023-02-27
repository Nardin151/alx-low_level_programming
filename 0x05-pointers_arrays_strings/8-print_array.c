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
int counter;
for (counter = 0 ; counter < n - 1 ; counter++)
{
printf("%d, ", a[counter]);
}
printf("%d\n", a[n - 1]);
}
