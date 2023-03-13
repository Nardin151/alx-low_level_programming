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
char *s;
if (size == 0)
return (NULL);
s = malloc(sizeof(char) * size);
s[0] = c;
return (s);
}
