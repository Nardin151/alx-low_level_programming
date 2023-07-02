#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of an array
 * @size: the number of bytes of each element
 * Return: pointer to the array
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	if ((nmemb  == 0) | (size == 0))
		return (NULL);
	ptr = malloc(sizeof(char) * (size * nmemb));
	if (ptr == 0)
		return (NULL);
	return (ptr);
	
}
