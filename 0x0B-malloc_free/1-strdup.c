#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  a function that returns a pointer to a newly
 * allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: String that we will copy
 * Return: NULL if str = NULL and On success, the _strdup function returns a
 * pointer to the duplicated string. It returns NULL if
 * insufficient memory was available
 **/
char *_strdup(char *str)
{
char *a = malloc(sizeof(str));
unsigned int i = 0;
/*Calculate the size*/
unsigned int s = sizeof(str);
if (a == NULL)
return (NULL);
while (i < s)
{
a[i] = str[i];
i++;
}
return (a);
}
