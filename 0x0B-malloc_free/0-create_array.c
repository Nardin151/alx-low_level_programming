#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array
 * @c: The character that we will fill the array with
 * Return: Returns a pointer to the array, or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
char *a = malloc(size);
unsigned int i = 0;
if (size == 0)
return (NULL);
if (a ==  NULL)
return (NULL);
while (i < size)
{
a[i] = c;
i++;
}
return (a);

}
