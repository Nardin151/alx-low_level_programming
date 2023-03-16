#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: the smallest value
 * @max: maximum value
 * Return: the pointer to the newly created array
 **/
int *array_range(int min, int max)
{
int counter;
int mini = min;
int *ptr;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * (max - min + 1));
for (counter = 0 ; counter <= (max - min) ; counter++)
{
ptr[counter] = mini;
mini++;
}
if (ptr == NULL)
return (NULL);
return (ptr);
}
