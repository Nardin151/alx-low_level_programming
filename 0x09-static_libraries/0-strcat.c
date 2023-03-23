#include <stdio.h>
#include "main.h"
/**
 * strcat - concatinate the string pointed to by src to the end of dest
 * @dest: the string that we will concatinate to
 * @src: the string that we will concatinate from
 * Return: dest after concatination
 **/
char *_strcat(char *dest, char *src)
{
int size = 0;
int counter;
for (counter = 0 ; dest[counter] != '\0' ; counter++)
size++;
for (counter = 0 ; src[counter] != '\0' ; counter++)
dest[size++] = src[counter];
return (dest);
}
