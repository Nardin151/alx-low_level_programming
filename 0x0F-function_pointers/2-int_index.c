#include "function_pointers.h"
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
