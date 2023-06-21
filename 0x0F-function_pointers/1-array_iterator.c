#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array of ints
 * @size: of the array
 * @action: function
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int index = 0;
while (index < size)
{
action(array[index]);
index++;
}
}
