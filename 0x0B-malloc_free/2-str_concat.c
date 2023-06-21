#include "main.h"
#include <string.h>
#include "stdlib.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: First String
 * @s2: Second String
 * Return: A pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the
 * contents of s2, and null terminated
 **/
char *str_concat(char *s1, char *s2)
{
unsigned int s;
char *s3;
unsigned int index = 0;
int x  = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s = strlen(s1) + strlen(s2);
s3 = malloc(sizeof(char) * (s + 1));
if (s3 == NULL)
return (NULL);
while (index <= s)
{
if (index < strlen(s1))
s3[index] = s1[index];
else
{
x = s - (strlen(s2) + index);
if (x < 0)
s3[index] = s2[-x];
else
s3[index] = s2[x];
}
index++;
}
return (s3);
}
