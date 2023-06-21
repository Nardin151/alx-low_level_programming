#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @array: an array of ints
 * @size: size of the array
 * @cmp: pointer to the function
 * Return:  index of the first element for which the
 * cmp function does not return 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;
if (size <= 0)
return (-1);
while (index < size)
{
if (cmp(array[index]) != 0)
{
return (index);
}
index++;
}
return (-1);
}
