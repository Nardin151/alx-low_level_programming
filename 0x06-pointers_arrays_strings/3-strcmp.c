#include <stdio.h>
#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: int representing the difference between ascii
 * codes of both strings
 **/
int _strcmp(char *s1, char *s2)
{
int str1 = 0;
int str2 = 0;
int counter;
for (counter = 0 ; s1[counter] != '\0' ; counter++)
str1 = (int) s1[counter];
for (counter = 0 ; s2[counter] != '\0' ; counter++)
str2 = (int) s2[counter];
return (str1 - str2);
}
