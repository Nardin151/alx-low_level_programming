#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string that we will concatinate to s1
 * @n: the number of bytes that we will copy from s2
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int counter;
unsigned int size1 = 0;
unsigned int size2 = 0;
char *s3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (counter = 0 ; s1[counter] != '\0' ; counter++)
size1++;
for (counter = 0 ; s2[counter] != '\0' ; counter++)
size2++;
if (n > size2)
n = size2;
s3 = malloc(sizeof(char) * (size1 + n + 1));
for (counter = 0 ; s1[counter] ; counter++)
s3[counter] = s1[counter];
for (counter = 0 ; counter < n ; counter++)
s3[size1 + counter] = s2[counter];
s3[size1 + n] = '\0';
if (s3 == NULL)
return (NULL);
return (s3);
}
