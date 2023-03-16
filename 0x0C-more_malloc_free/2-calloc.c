#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array, using malloc.
 * @nmeb: array
 * @size: size of the array
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
if ((nmemb == 0) || (size == 0))
return (NULL);
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
