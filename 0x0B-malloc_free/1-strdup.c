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
if (str == NULL)
return (NULL);
for (counter = 0 ; str[counter] != '\0' ; counter++)
size++;
str2 = malloc(sizeof(char) * (size + 1));
for (counter = 0 ; counter < size; counter++)
str2[counter] = str[counter];
str2[size] = '\0';
return (str2);
}
