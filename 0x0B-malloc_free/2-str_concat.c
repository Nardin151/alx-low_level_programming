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
int flag1 = 1;
int flag2 = 1;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (counter = 0 ; (s1[counter] != '\0') & (flag1) ; counter++)
size1++;
for (counter = 0 ; (s2[counter] != '\0') & (flag2) ; counter++)
size2++;
s3 = malloc(sizeof(char) * (size1 + size2 + 1));
for (counter = 0 ; s1[counter] != '\0' ; counter++)
s3[counter] = s1[counter];
for (counter = 0 ; s2[counter] != '\0' ; counter++)
s3[counter + size1] = s2[counter];
return (s3);
}
