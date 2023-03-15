#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char that we will initialize the char with
 * Return: a pointer to the array or null
 **/
char *create_array(unsigned int size, char c)
{
unsigned int counter;
char *s;
if (size == 0)
return (NULL);
else
{
s = malloc(sizeof(char) * size);
for (counter = 0 ; counter < size ; counter ++)
s[counter] = c;
s[size] = '\0';
if (s == NULL)
return (NULL);
else
return (s);
}
}
