#include <stdio.h>
#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * Return: returns the concatenated string
 * @dest: the string that we will append to
 * @src: the string that we will append to the end of dest
 **/
char *_strcat(char *dest, char *src)
{
int sizeof_s1 = 0;
int counter;
for (counter = 0 ; dest[counter] != '\0' ; counter++)
sizeof_s1++;
for (counter = 0 ; src[counter] != '\0' ; counter++)
{
dest[sizeof_s1] = src[counter];
sizeof_s1++;
}
return (dest);
}
