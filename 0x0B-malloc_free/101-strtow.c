#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * strtow -  a function that splits a string into words.
 * @str: string of chars
 * Return: array of words
 **/
char **strtow(char *str)
{
char *s;
char temp;
int col = 0;
int *size_per_word;
int counter;
for (counter = 0 ; str[counter] ; counter++)
{
col++;
if (str[counter] == ' ')
{
white_spaces++;
}
}
}
