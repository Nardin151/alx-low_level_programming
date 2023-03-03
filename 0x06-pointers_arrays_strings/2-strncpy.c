#include <stdio.h>
#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * Return: a copy of a string in the dest string
 * @dest: string that we will copy to
 * @src: string that we will copy from
 * @n: the number of char that we will copy
 **/
char *_strncpy(char *dest, char *src, int n)
{
int counter;
for (counter = 0 ; (counter < n) && (src[j] != '\0') ; counter++)
dest[counter] = src[counter];
for (; (counter < n) && (src[j] != '\0') ; counter++)
dest[counter] = '\0';
return (dest);
}
