#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string that we need to find the duplicate for
 * Return: pointer to the string
 **/
char *_strdup(char *str)
{
int counter;
int size = 0;
char *str2;
for (counter = 0 ; str[counter] != '\0' ; counter++)
size++;
str2 = malloc(sizeof(char) * size);
for (counter = 0 ; counter <= size + 1 ; counter++)
str2[counter] = str[counter];
if (str == NULL)
return (NULL);
else
return (str2);
}
