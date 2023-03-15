#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string no 1
 * @s2: string no 2
 * Return: concatinated string
 **/
char *str_concat(char *s1, char *s2)
{
int counter;
int size1 = 0;
int size2 = 0;
char *s3;
for (counter = 0 ; s1[counter] != '\0' ; counter++)
size1++;
for (counter = 0 ; s2[counter] != '\0' ; counter++)
size2++;
if (s1 == NULL)
size1 = 0;
if (s2 == NULL)
size2 = 0;
s3 = malloc(sizeof(char) * (size1 + size2 + 1));
for (counter = 0 ; s1[counter] != '\0' ; counter++)
s3[counter] = s1[counter];
for (counter = 0 ; s2[counter] != '\0' ; counter++)
s3[counter + size1] = s2[counter];
if (s3 == NULL)
return (NULL);
else
return (s3);
}
