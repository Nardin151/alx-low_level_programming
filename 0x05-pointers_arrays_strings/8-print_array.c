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
if ((sizeof(a) / 4) > 1)
{
for (counter = 0 ; counter < (sizeof(a) / 4) - 1 ; counter++)
{
printf("%d, ", a[counter]);
}
printf("%d\n", a[n - 1]);
}
else if ((sizeof(a) / 4) == 1)
printf("%d\n", a[1]);

}
