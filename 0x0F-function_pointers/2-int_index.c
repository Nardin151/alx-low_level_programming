#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @array: array of ints
 * @size: size of the array
 * @cmp: pointer to function
 * Return: index of the value that matches in the array
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
int counter;
if (size < 0 || array == NULL || cmp == NULL)
return (-1);
for (counter = 0 ; counter < size ; counter++)
{
if (cmp(array[counter]) != 0)
return (counter);
}
return (-1);
}
