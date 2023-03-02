#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: number of elements in the array
 **/
void reverse_array(int *a, int n)
{
int counter;
int temp;
if (n % 2 != 0)
n = n - 1;
for (counter = 0 ; counter < n / 2 ; counter++)
{
temp = a[counter];
a[counter] = a[n - counter];
a[n - counter] = temp;
}
}
