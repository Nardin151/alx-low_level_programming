#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: size of the array
 * Return:  returns a pointer to the allocated memory.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
unsigned int counter;
if ((nmemb == 0) || (size == 0))
return (NULL);
ptr = malloc(sizeof(int) * size * nmemb);
for (counter = 0 ; counter < size * nmemb ; counter++)
ptr[counter] = 0;
if (ptr == NULL)
return (NULL);
return (ptr);
}
