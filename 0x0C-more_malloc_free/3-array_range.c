#include "main.h"
#include <stdlib.h>
/**
 * array_range -  a function that creates an array of integers
 * @min: start value
 * @max: end value that should be present
 * Return: the pointer to the newly created array
 **/
int *array_range(int min, int max)
{
	unsigned int diff = max - min;
	unsigned int index = 0;
	int *ptr;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * diff);
	if (ptr == NULL)
		return (NULL);
	while (index <= diff)
	{
		ptr[index] = min + index;
		index++;
	}
	return (ptr);
}
