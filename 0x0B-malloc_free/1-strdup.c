#include <string.h>
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
char *a;
unsigned int i = 0;
/*Calculate the size*/
unsigned int s;
if (str == NULL)
return (NULL);
s = strlen(str);
a = malloc(sizeof(char) * s);
i = 0;
if (a == NULL)
return (NULL);
while (i < s)
{
a[i] = str[i];
i++;
}
return (a);
}
